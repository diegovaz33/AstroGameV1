// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParentWeapon.generated.h"

class AParentBullet;

UCLASS()
class ASTEROIDSGAME_API AParentWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParentWeapon(); 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Handles the Firing of the Bullets
	void Fire();

	/*
	* Sets a Timer and after the reload time is over, "FinishReloading" method is called.
	*/
	UFUNCTION(BlueprintCallable)
	void Reload();
	
	/*
	* Actually Does the Reloading by resetting the Current Bullet Count to the Magazine Capacity.
	*/
	void FinishReloading();

	/**
	 * Starts Firing the Bullets according to the Owner's Viewing Direction & Weapon Info. Stops when StopFiringWeapon() is called.
	*/
	UFUNCTION(BlueprintCallable)
	void StartFiringWeapon();

	/**
	 * StopFiringWeapon
	*/
	UFUNCTION(BlueprintCallable)
	void StopFiringWeapon();

public:

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (DisplayName="Weapon Name"))
	FString	m_WeaponName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (DisplayName="Magazine Capacity"))
	int	m_MagazineCapacity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Bullet", meta = (DisplayName="Bullet Class"))
	TSubclassOf<AParentBullet>	m_BulletClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Bullet", meta = (DisplayName="Bullet Speed"))
	float m_BulletSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Bullet", meta = (DisplayName="Bullet Range"))
	float m_BulletRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (DisplayName="Firing Rate"))
	float m_FiringRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (DisplayName="Reloading Time"))
	float m_ReloadingTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (DisplayName="Firing Direction Count"))
	int	m_FiringDirectionNum;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (DisplayName="Firing Direction Delta Angle"))
	float m_FiringDeltaAngle;

	UPROPERTY(BlueprintReadOnly, Category = "Weapon", meta = (DisplayName = "Bullet Count"))
	int							m_CurrentBulletCount;

	float						m_FireTimer;
	bool						m_Reloading;
	bool						m_IsFiring;

	AActor*						m_ParentActor;

	TArray<FRotator>			m_FiringRotations;
};
