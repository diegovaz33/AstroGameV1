// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParentBullet.generated.h"

UCLASS()
class ASTEROIDSGAME_API AParentBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParentBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetDamage() const;

	/*
	* Sets up the Bullet before the actual Bullet is Spawned into the World (using DeferredSpawn)
	@param Speed - the speed of the bullet.
	@param Range - the range of the bullet
	@param Direction - the direction of the bullet (unit vector!)
	*/
	void Setup(float Speed, float Range, const FVector& Direction);

private:

	UFUNCTION()
	void OnBulletOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Bullet", meta = (DisplayName = "Bullet Damage"))
	float	m_Damage;

	UPROPERTY(EditDefaultsOnly, Category = "Bullet", meta = (DisplayName = "Destroy On Hit"))
	bool	m_DestroyOnHit;

	
	FVector m_Velocity;
	float	m_Lifetime;
	float	m_Timer;

public:

	AActor*			m_Owner;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BulletMesh;
	
};	
