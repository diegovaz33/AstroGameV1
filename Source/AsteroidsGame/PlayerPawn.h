// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class ASTEROIDSGAME_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* Converts Mouse to WorldSpace and makes Actor face towards the Mouse */
	UFUNCTION(BlueprintCallable)
	void Aim();

	UFUNCTION(BlueprintNativeEvent)
	void HandleAsteroidDestroyed();
	virtual void HandleAsteroidDestroyed_Implementation();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UPROPERTY(BlueprintReadOnly)
	int	 Score;

	UPROPERTY(BlueprintReadOnly)
	float Height;

	
};
