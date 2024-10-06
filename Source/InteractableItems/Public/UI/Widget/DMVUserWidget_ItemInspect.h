// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DMVUserWidget.h"
#include "DMVUserWidget_ItemInspect.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTABLEITEMS_API UDMVUserWidget_ItemInspect : public UDMVUserWidget
{
	GENERATED_BODY()

	UPROPERTY()
	FText TItemName;

	UPROPERTY()
	FText TItemDescription;
};
