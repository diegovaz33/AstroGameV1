// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "ParentGameInstance.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	UParentGameInstance* GameInst = Cast<UParentGameInstance>(GetGameInstance());
	if (GameInst)
		Height = GameInst->CameraHeight;
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void APlayerPawn::Aim()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (!PC) return;
	
	FVector MouseWorldLocation;
	FVector MouseWorldDirection;
	PC->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);

	FRotator rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), MouseWorldLocation + MouseWorldDirection * Height);

	/* Only consider Yaw */
	rot.Pitch = 0.f;
	rot.Roll = 0.f;

	SetActorRotation(rot);
}

void APlayerPawn::HandleAsteroidDestroyed_Implementation()
{
	++Score;
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

