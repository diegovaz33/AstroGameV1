// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "ParentAsteroid.generated.h"

class AParentBullet;

USTRUCT(BlueprintType)
struct FAsteroidsInfoStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	float Size;

	UPROPERTY(BlueprintReadOnly)
	int Min_Children;

	UPROPERTY(BlueprintReadOnly)
	int Max_Children;

	UPROPERTY(BlueprintReadOnly)
	float Max_HP;
};


UCLASS()
class ASTEROIDSGAME_API AParentAsteroid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParentAsteroid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleBulletCollision(AParentBullet* BulletHit, AActor* Owner);

	/* Calculate Direction based on a World Point (Destination) */
	void SetDestination(const FVector& Destination);

	/* Set the Direction of Travel. Must be Unit Vector !*/
	void SetDirection(const FVector& Direction);

	/* Destroys the Asteroid and Spawns a 'ChildrenToSpawn' number of Child Asteroids */
	void DestroyAsteroid();

	/* Checks if Asteroid is still in View. If not, then Destroy it (since it only goes in 1 direction!)*/
	void CheckIfInView();

public:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AsteroidMesh;

	/* This variable serves to access the BP Data Table & 
	* let the system know the asteroid's hp, how many children to deploy when destroyed, etc */
	static UDataTable* AsteroidInfoTable;

	/*
	* Depending on the Asteroid's level, the HP will be different. This is the Current HP of the Asteroid as the 
	* MAX HP can be calculated using the Data Table and the Level of the Asteroid.
	*/
	UPROPERTY(BlueprintReadOnly)
	float HP;

	/* Determines the number of children to spawn when this asteroids gets destroyed */
	int ChildrenToSpawn;

	UPROPERTY(EditAnywhere)
	float Speed;

	FVector Direction;

	FRotator Rotation;

	UPROPERTY(EditAnywhere)
	float RotationMaxSpeed;

	/*
	* Level means the amount of times the asteroids' need to be destroyed to be completely rid of it
	* and not spawn more pieces.
	* e.g. Level 0 -> None. Once this Asteroid is destroyed, it doesn't spawn new pieces...
	* Once an asteroid is destroyed, the asteroid actor itself is destroyed but new asteroid Actors with a lower level are spawned.
	*/
	int Level;
	bool IsInView;

};
