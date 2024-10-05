// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/DMVUserWidget.h"
#include "UI/WidgetController/DMVWidgetController_ItemInspect.h"
#include "UI/WidgetController/DMVWidgetController_Overlay.h"
#include "DMVHUD.generated.h"

struct FWidgetControllerParams;

/**
 * 
 */
UCLASS()
class INTERACTABLEITEMS_API ADMVHUD : public AHUD
{
	GENERATED_BODY()

public:
	// BEGIN - Create Overlay Widget Implementation
	UPROPERTY()
	TObjectPtr<UDMVUserWidget> OverlayWidget;
	UDMVWidgetController_Overlay* GetOverlayWidgetController(const FWidgetControllerParams& SendWCParams);
	void InitOverlay(APlayerController* PC, APlayerState* PS);
	// END - Create Overlay Widget Implementation

	// BEGIN - Create Inspect Widget Implementation
	UPROPERTY()
	TObjectPtr<UDMVUserWidget> InspectWidget;
	UDMVWidgetController_ItemInspect* GetItemInspectWidgetController(const FWidgetControllerParams& SendWCParams);
	void InitInspect(APlayerController* PC, APlayerState* PS);
	// BEGIN - Create Inspect Widget Implementation
	
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UDMVUserWidget> OverlayWidgetClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UDMVUserWidget> ItemInspectWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDMVWidgetController_Overlay> OverlayWidgetControllerClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UDMVWidgetController_ItemInspect> ItemInspectWidgetControllerClass;

	UPROPERTY()
	TObjectPtr<UDMVWidgetController_Overlay> OverlayWidgetController;
	UPROPERTY()
	TObjectPtr<UDMVWidgetController_ItemInspect> ItemInspectWidgetController;
};
