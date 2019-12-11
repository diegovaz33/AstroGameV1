// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCPPBlueprintLibrary.h"
#include "SceneView.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

void UMyCPPBlueprintLibrary::IsInView(AActor * Actor, APlayerController * PlayerController, bool & InView)
{
	ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(PlayerController->Player);
	if (LocalPlayer != nullptr && LocalPlayer->ViewportClient != nullptr && LocalPlayer->ViewportClient->Viewport)
	{
		UWorld* WorldContext = PlayerController->GetWorld();
		FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
			LocalPlayer->ViewportClient->Viewport,
			WorldContext->Scene,
			LocalPlayer->ViewportClient->EngineShowFlags)
			.SetRealtimeUpdate(true));

		FVector ViewLocation;
		FRotator ViewRotation;
		FSceneView* SceneView = LocalPlayer->CalcSceneView(&ViewFamily, ViewLocation, ViewRotation, LocalPlayer->ViewportClient->Viewport);
		if (SceneView != nullptr)
		{
			InView = SceneView->ViewFrustum.IntersectSphere(
				Actor->GetActorLocation(), Actor->GetSimpleCollisionRadius());
			return;
		}
	}

	InView = false;
}
