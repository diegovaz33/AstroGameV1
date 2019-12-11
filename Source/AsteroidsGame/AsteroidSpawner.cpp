// Fill out your copyright notice in the Description page of Project Settings.


#include "AsteroidSpawner.h"
#include "ParentGameInstance.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"

// Sets default values
AAsteroidSpawner::AAsteroidSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Initialized = false;
	/*
	Initializing here since Asteroids can initialize very late in the gameplay, and AsteroidSpawner exists since the beginning.
	*/
	static ConstructorHelpers::FObjectFinder<UDataTable> BPDataTable(TEXT("DataTable'/Game/Gameplay/Asteroids/AsteroidsInfo.AsteroidsInfo'"));
	AParentAsteroid::AsteroidInfoTable = BPDataTable.Object;
	DirectionRadiusFactor = 0.25f;
}

// Called when the game starts or when spawned
void AAsteroidSpawner::BeginPlay()
{
	Super::BeginPlay();
	Timer = 0.f;
}

void AAsteroidSpawner::SpawnAsteroids()
{
	int SpawnNumber = FMath::RandRange(MinSpawnNumber, MaxSpawnNumber);
	int MaxClassIndex = AsteroidClasses.Num() - 1;
	UWorld* World = GetWorld();

	if (!World) return;

	float ScreenRatio{ 1.f };
	float HorizontalFOV{ 0.f };

	if (StaticCamera)
		HorizontalFOV = StaticCamera->Camera->FieldOfView;

	/* Update Screen Ratio  */
	if (PC)
	{
		int X = 1.f, Y = 1.f;
		PC->GetViewportSize(X, Y);
		ScreenRatio = static_cast<float>(X) / static_cast<float>(Y);
	}
	float RangeX = 2.f * Height * FMath::Tan(FMath::DegreesToRadians(HorizontalFOV * 0.5f)); //FOV is the Horizontal
	float RangeY = RangeX / ScreenRatio;

	/* Calculating the Hypotenus of the Area the Camera Covers and then dividing by 2 to get the radius that
	 covers more than the area shown to make a simpler calculation of where the Asteroid should spawn
	 and giving somewhat a bigger radius based on the Biggest Asteroid there is so that it is 100% certain that
	 no Asteroids will spawn on the Screen
	*/
	SpawnRadius = 0.5f * (FVector2D(RangeX, RangeY).Size() + MaxAsteroidSize);
	
	for (int i = 0; i < SpawnNumber; ++i)
	{
		int ClassIndex = FMath::RandRange(0, MaxClassIndex);

		FVector SpawnDirection = CameraUpward.RotateAngleAxis(FMath::RandRange(0.f, 360.f), CameraForward);		

		FVector SpawnPoint = SpawnRadiusCenter + SpawnDirection * SpawnRadius;
		FVector Destination = SpawnRadiusCenter + SpawnDirection * SpawnRadius * DirectionRadiusFactor;

		FTransform Transform(FRotator(), SpawnPoint, FVector(1.f));
		AParentAsteroid* NewAsteroid = World->SpawnActorDeferred<AParentAsteroid>(AsteroidClasses[ClassIndex].Get(), Transform);
		if (NewAsteroid)
		{
			NewAsteroid->SetDestination(Destination);
			NewAsteroid->Level = FMath::RandRange(0, MaxLevelToSpawn);
			NewAsteroid->FinishSpawning(Transform);
		}
	}
}

void AAsteroidSpawner::Init()
{
	/* Get Camera Height (Gameplay Height) */
	UParentGameInstance* GameInst = Cast<UParentGameInstance>(GetGameInstance());
	if (GameInst)
		Height = GameInst->CameraHeight;

	/* Retrieve Camera Info (Pos, Rot) */
	PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AActor* vt = PC->GetViewTarget();

		FRotator rot = vt->GetActorRotation();

		CameraForward = UKismetMathLibrary::GetForwardVector(rot);
		CameraUpward = UKismetMathLibrary::GetUpVector(rot);

		SpawnRadiusCenter = vt->GetActorLocation() + CameraForward * Height;

		/* Calculate the Spawn Radius. The Radius must be totally outside the */
		StaticCamera = Cast<AStaticCamera>(vt);		
	}

	/* Maximum Asteroid Size based on Data Table */
	int MaxLevel = 0;

	/*Retrieve the Biggest Size Asteroid from the Data Table*/
	if (AParentAsteroid::AsteroidInfoTable)
	{
		auto Table = AParentAsteroid::AsteroidInfoTable->GetTableData();

		for (auto& Row : Table)
		{
			int nLevel = FCString::Atoi(*Row[0]);
			if (nLevel > MaxLevel)
				MaxLevel = nLevel;
		}
		FString ContextString;
		FAsteroidsInfoStruct* Row = AParentAsteroid::AsteroidInfoTable->FindRow<FAsteroidsInfoStruct>(*FString::FromInt(MaxLevel), ContextString, true);
		if (Row)
			MaxAsteroidSize = Row->Size * 100.f; // Size in Struct should be Scaled by 100.f (Meter to cm)
	}
	
	Initialized = true;
}

// Called every frame
void AAsteroidSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!Initialized) return;
	Timer += DeltaTime;

	if (Timer >= SpawnRate)
	{
		Timer -= SpawnRate;
		SpawnAsteroids();
	}
}

