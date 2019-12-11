// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LocalPlayer.h"
#include "MyCPPBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ASTEROIDSGAME_API UMyCPPBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/* Frustum Checker Source: https://answers.unrealengine.com/questions/65488/perform-frustum-check.html */
	UFUNCTION(BlueprintCallable)
	static void IsInView(AActor* Actor, APlayerController* ObservingView, bool& InView);

};
