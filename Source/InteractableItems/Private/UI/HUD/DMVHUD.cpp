// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/DMVHUD.h"

UDMVWidgetController_Overlay* ADMVHUD::GetOverlayWidgetController(const FWidgetControllerParams& SendWCParams)
{
	if(OverlayWidgetController == nullptr)
	{
		OverlayWidgetController = NewObject<UDMVWidgetController_Overlay>(this, OverlayWidgetControllerClass);
		OverlayWidgetController->SetWidgetControllerParams(SendWCParams);
	}
	return OverlayWidgetController;
}

void ADMVHUD::InitOverlay(APlayerController* PC, APlayerState* PS)
{
	// First let's check if the OverlayWidgetClass and OverlayWidgetControllerClass are set
	checkf(OverlayWidgetClass, TEXT("OverlayWidgetClass is not set in %s"), *GetName());
	checkf(OverlayWidgetControllerClass, TEXT("OverlayWidgetControllerClass is not set in %s"), *GetName());
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget = Cast<UDMVUserWidget>(Widget);

	// Create the Overlay Widget Controller
	const FWidgetControllerParams WCParams(PC, PS);
	UDMVWidgetController_Overlay* OverlayWidgetController = GetOverlayWidgetController(WCParams);

	// Set the Overlay Widget Controller to the Overlay Widget
	OverlayWidget->SetWidgetController(OverlayWidgetController);

	// Finally add the Overlay Widget to the Viewport
	OverlayWidget->AddToViewport();
}

UDMVWidgetController_ItemInspect* ADMVHUD::GetItemInspectWidgetController(const FWidgetControllerParams& SendWCParams)
{
}

void ADMVHUD::InitInspect(APlayerController* PC, APlayerState* PS)
{
	
}
