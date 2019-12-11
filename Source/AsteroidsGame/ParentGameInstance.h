// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ParentGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ASTEROIDSGAME_API UParentGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite)
	float CameraHeight;
};
