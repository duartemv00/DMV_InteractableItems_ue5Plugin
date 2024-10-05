// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/WidgetController/DMVWidgetController.h"

void UDMVWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& InWidgetControllerParams)
{
	PlayerController = InWidgetControllerParams.PlayerController;
	PlayerState = InWidgetControllerParams.PlayerState;
	
	// TODO: Assign the rest necessary dependencies.
}
