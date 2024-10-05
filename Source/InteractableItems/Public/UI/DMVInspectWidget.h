// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/DMVUserWidget.h"
#include "DMVInspectWidget.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTABLEITEMS_API UDMVInspectWidget : public UDMVUserWidget
{
	GENERATED_BODY()

	UPROPERTY()
	FText TItemName;

	UPROPERTY()
	FText TItemDescription;

public:
	
	// UFUNCTION()
	// void InitializeWidget(FName NewItemName, FName NewItemDescription);
};
