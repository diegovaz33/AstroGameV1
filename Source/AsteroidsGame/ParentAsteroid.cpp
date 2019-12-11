// Fill out your copyright notice in the Description page of Project Settings.


#include "ParentAsteroid.h"
#include "ParentBullet.h"
#include "PlayerPawn.h"
#include "TimerManager.h"
#include "MyCPPBlueprintLibrary.h"
#include "Components/StaticMeshComponent.h"


// The Value for the AsteroidInfoTable gets initialized in the Asteroid Spawner! 
UDataTable* AParentAsteroid::AsteroidInfoTable = nullptr;

// Sets default values
AParentAsteroid::AParentAsteroid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	IsInView = false;
	AsteroidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Asteroid Mesh"));
	RootComponent = AsteroidMesh;
	RotationMaxSpeed = 1.f;
}

// Called when the game starts or when spawned
void AParentAsteroid::BeginPlay()
{
	Super::BeginPlay();
	static const FString ContextString(TEXT("FindRow Level"));

	UMyCPPBlueprintLibrary::IsInView(this, GetWorld()->GetFirstPlayerController(), IsInView);

	FAsteroidsInfoStruct* AsteroidInfo = AsteroidInfoTable->FindRow<FAsteroidsInfoStruct>(*FString::FromInt(Level), ContextString);
	if (AsteroidInfo)
	{
		HP = AsteroidInfo->Max_HP;
		ChildrenToSpawn = FMath::RandRange(AsteroidInfo->Min_Children, AsteroidInfo->Max_Children);
		AsteroidMesh->SetWorldScale3D(FVector(AsteroidInfo->Size));
	}
	
	Rotation = FRotator(
		FMath::RandRange(-RotationMaxSpeed, RotationMaxSpeed),
		FMath::RandRange(-RotationMaxSpeed, RotationMaxSpeed),
		FMath::RandRange(-RotationMaxSpeed, RotationMaxSpeed));

	FTimerHandle TempTimerHandle;
	AActor::GetWorldTimerManager().SetTimer(TempTimerHandle, this, &AParentAsteroid::CheckIfInView, 0.5f, true, 1.f);
}

// Called every frame
void AParentAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldOffset(Direction * Speed * DeltaTime);
	AddActorWorldRotation(Rotation);
	
}

void AParentAsteroid::HandleBulletCollision(AParentBullet* BulletHit, AActor* BulletOwner)
{
	if (!BulletHit) return;
	HP -= BulletHit->GetDamage();
	
	if (HP <= 0.f)
	{
		APlayerPawn* Player = Cast<APlayerPawn>(BulletOwner);
		if (Player) Player->HandleAsteroidDestroyed();
		DestroyAsteroid();
	}
}

void AParentAsteroid::SetDestination(const FVector & Destination)
{
	Direction = Destination - GetActorLocation();
	Direction.Normalize();
}

void AParentAsteroid::SetDirection(const FVector & direction)
{
	Direction = direction;
}

void AParentAsteroid::DestroyAsteroid()
{
	UWorld* World = GetWorld();
	if (World)
	{
		FTransform Transform = GetActorTransform();
		for (int i = 0; i < ChildrenToSpawn; ++i)
		{
			AParentAsteroid* NewAsteroid = World->SpawnActorDeferred<AParentAsteroid>(GetClass(), Transform);
			if (NewAsteroid)
			{
				FVector RandDir(FMath::RandRange(-1.f, 1.f), FMath::RandRange(-1.f, 1.f), 0.f);
				RandDir.Normalize();
				NewAsteroid->SetDirection(RandDir);
				NewAsteroid->Level = Level-1;
				NewAsteroid->FinishSpawning(Transform);
			}
		}
	}

	/*Finally Destroy the Actor, regardless the level or children it produces*/
	AActor::Destroy();
}

void AParentAsteroid::CheckIfInView()
{
	bool TempIsInView;
	UMyCPPBlueprintLibrary::IsInView(this, GetWorld()->GetFirstPlayerController(), TempIsInView);

	/* 
	* If IsInView is False, then that means that the Asteroid has never been on Screen (and we wait for it to appear)
	* If IsInView is true, then we check if the new IsInView() check returns false,
	* which means it was on the screen and now it isn't so we can safely delete it.
	*/
	if (!IsInView)
		IsInView = TempIsInView;
	else if (!TempIsInView)
		AActor::Destroy();
}
