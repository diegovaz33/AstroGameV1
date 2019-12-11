// Fill out your copyright notice in the Description page of Project Settings.

#include "ParentWeapon.h"
#include "ParentBullet.h"
#include "Engine/World.h"
#include "TimerManager.h"


// Sets default values
AParentWeapon::AParentWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AParentWeapon::BeginPlay()
{
	Super::BeginPlay();
	m_ParentActor = GetParentActor();
	m_CurrentBulletCount = m_MagazineCapacity;
	
	/*
	Emplace each Direction's Rotations so that we later rotate them with the current Forward Vector
	
	StartingAngle is the Leftmost/Anticlockwise-most Angle and calculate it by [(1-n) / 2] * DeltaAngle, where
	n is the number of Directions and
	DeltaAngle is the Angle between these directions.

	This is used so that we equally distribute these directions around the Forward Vector
	*/
	float StartingAngle = (1.f - static_cast<float>(m_FiringDirectionNum)) * 0.5f * m_FiringDeltaAngle;
	for (int i = 0; i < m_FiringDirectionNum; ++i)
		//Emplacing the Pitch Yaw Roll Constructor
		m_FiringRotations.Emplace(0.f, StartingAngle + (i*m_FiringDeltaAngle), 0.f);
}

// Called every frame
void AParentWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/* Placed outside to prevent cheating the system by spamming the Fire Button */
	m_FireTimer += DeltaTime;

	//If reloading, don't even bother trying to see if the player is trying to Fire
	if (m_Reloading) return;

	if (m_IsFiring)
	{
		if (m_FireTimer >= m_FiringRate)
		{
			//Only perform the Reload function if it's not currently reloading and if the CurrentBulletCount is 0 or lower.
			//Else the Weapon can Fire.
			if (m_CurrentBulletCount <= 0)
				Reload();
			else if(m_CurrentBulletCount > 0)
			{
				--m_CurrentBulletCount;
				Fire();
			}
			m_FireTimer  = 0.f;
		}		
	}
}

void AParentWeapon::Fire()
{
	UWorld* TheWorld = GetWorld();
	if (!TheWorld)
		return;

	FTransform Transform = GetActorTransform();
	FVector ActorForwardVector = GetActorForwardVector();

	for (int i = 0; i < m_FiringDirectionNum; ++i)
	{
		//Create the Bullet in the Weapon's Transformation and give it the necessary info in order to move
		AParentBullet* NewBullet = TheWorld->SpawnActorDeferred<AParentBullet>(m_BulletClass.Get(), Transform, m_ParentActor
			, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
		if (NewBullet)
		{
			NewBullet->Setup(m_BulletSpeed, m_BulletRange, m_FiringRotations[i].RotateVector(ActorForwardVector));
			NewBullet->FinishSpawning(Transform);
		}
	}
}

void AParentWeapon::Reload()
{
	/*Ignore when the Magazine is full*/
	if (m_CurrentBulletCount == m_MagazineCapacity) return;

	m_Reloading = true;
	/* Make a timer so that it Finishes Reloading after Reloading Time completes */
	FTimerHandle TempTimerHandle;
	AActor::GetWorldTimerManager().SetTimer(TempTimerHandle, this, &AParentWeapon::FinishReloading, 1.f, false, m_ReloadingTime);
}

void AParentWeapon::FinishReloading()
{
	m_Reloading = false;
	m_CurrentBulletCount = m_MagazineCapacity;
}

void AParentWeapon::StartFiringWeapon()
{
	m_IsFiring = true;
}

void AParentWeapon::StopFiringWeapon()
{
	m_IsFiring = false;
}

