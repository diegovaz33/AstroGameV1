// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentAsteroid.h"
#include "StaticCamera.h"
#include "GameFramework/Actor.h"
#include "AsteroidSpawner.generated.h"

UCLASS()
class ASTEROIDSGAME_API AAsteroidSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroidSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnAsteroids();

public:	

	/* Initializing everything.
	* This is separated from the Begin Play Implementation because
	* The View Target Blend is done after BeginPlay and it is necessary
	* To get the actor the View Target holds (so that we get the correct camera aspect ratio + fovy)
	*/
	UFUNCTION(BlueprintCallable)
	void Init();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* How often to spawn a Certain Number of Asteroids , in seconds */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnRate;

	/* The Min amount of Asteroids to spawn when SpawnAsteroids() is called */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int	MinSpawnNumber;

	/* The Max amount of Asteroids to spawn when SpawnAsteroids() is called */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int	MaxSpawnNumber;

	/* The classes to use to Spawn different Asteroids */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AParentAsteroid>> AsteroidClasses;

	float Timer;
	float Height;
	bool Initialized;

	/* The Center Point of the Spawn Radius */
	FVector SpawnRadiusCenter;

	/* We need this to randomize rotate the direction and randomize the Asteroid spawn point*/
	FVector CameraForward;

	/* We need this to know the Direction where to go */
	FVector CameraUpward;

	AStaticCamera* StaticCamera;
	
	
	APlayerController* PC;

	float SpawnRadius;
	
	/* We need this to make sure that even the biggest Asteroid doesn't spawn on the Screen */
	float MaxAsteroidSize;

	/* This is used to generate a new point within a radius to calculate a random direction for a spawned asteroid, while
	* making sure that this direction causes the asteroid to go through the screen. 
	* To assert this, the Direction Radius should be that of a circle that can fit in the screen. (e.g. 0.5 times the Spawn Radius)
	*/
	float DirectionRadiusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxLevelToSpawn;
};
