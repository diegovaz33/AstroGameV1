 // Fill out your copyright notice in the Description page of Project Settings.

#include "ParentBullet.h"
#include "ParentAsteroid.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

AParentBullet::AParentBullet()
{
	PrimaryActorTick.bCanEverTick = true;
	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Mesh"));

	RootComponent = BulletMesh;

	BulletMesh->SetGenerateOverlapEvents(true);
	BulletMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BulletMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	BulletMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

}

void AParentBullet::BeginPlay()
{
	Super::BeginPlay();
	m_Owner = GetOwner();
	BulletMesh->OnComponentBeginOverlap.AddDynamic(this, &AParentBullet::OnBulletOverlap);
}

void AParentBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_Timer += DeltaTime;
	AddActorWorldOffset(m_Velocity * DeltaTime);

	/* Destroy Actor if already out of Range */
	if (m_Timer >= m_Lifetime)
		AActor::Destroy();
}

float AParentBullet::GetDamage() const
{
	return m_Damage;
}

void AParentBullet::Setup(float Speed, float Range, const FVector & Direction)
{
	m_Lifetime = Range / Speed;
	m_Velocity = Speed * Direction;
	m_Timer = 0.f;
	SetActorRotation(FRotationMatrix::MakeFromX(Direction).Rotator());
}

void AParentBullet::OnBulletOverlap(UPrimitiveComponent* OverlappedComponent
	, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	AParentAsteroid* Asteroid = Cast<AParentAsteroid>(OtherActor);
	if (Asteroid)
		Asteroid->HandleBulletCollision(this, m_Owner);

	/*Ignore collisions with other bullets, Owner */
	bool IsBullet = (Cast<AParentBullet>(OtherActor) != nullptr);
	if (!IsBullet && OtherActor != m_Owner && m_DestroyOnHit)
		AActor::Destroy();
}