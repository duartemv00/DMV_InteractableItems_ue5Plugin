// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DMVInteractableItemsInterface.generated.h"


UINTERFACE()
class UDMVInteractableItemsInterface : public UInterface
{
	GENERATED_BODY()
	// This class does not need to be modified.
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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Inspect(ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FText& GivenItemName,
	             FText& GivenItemDescription);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Read(ACharacter* InteractingCharacter, FText& ReadableText);
};
