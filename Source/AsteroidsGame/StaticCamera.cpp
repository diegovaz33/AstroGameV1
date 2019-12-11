// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticCamera.h"

// Sets default values
AStaticCamera::AStaticCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Static Camera"));
	RootComponent = Camera;
}

// Called when the game starts or when spawned
void AStaticCamera::BeginPlay()
{
	Super::BeginPlay();
}

