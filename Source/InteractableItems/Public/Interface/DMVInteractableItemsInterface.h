// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DMVInteractableItemsInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UDMVInteractableItemsInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INTERACTABLEITEMS_API IDMVInteractableItemsInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnInteract(ACharacter* InteractingCharacter);
};
