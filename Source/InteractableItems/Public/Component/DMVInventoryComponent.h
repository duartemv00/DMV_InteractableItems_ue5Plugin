// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DMVInteractableItemsTypes.h"
#include "Components/ActorComponent.h"
#include "Interface/DMVInteractableItemsInterface.h"
#include "DMVInventoryComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTABLEITEMS_API UDMVInventoryComponent : public UActorComponent, public IDMVInteractableItemsInterface
{
	GENERATED_BODY()

public:
	UDMVInventoryComponent();

protected:
	UPROPERTY(BlueprintReadOnly)
	TMap<FInventoryItemData, int32> StoredItems;

	UPROPERTY(BlueprintReadOnly)
	TArray<FGameplayTag> ItemsHistory;
	
	virtual void BeginPlay() override;

	UFUNCTION()
	bool AddItemToStoredItems(const FInventoryItemData& Item, int32 Quantity);
	
	UFUNCTION()
	bool RemoveItemFromStoredItems(const FInventoryItemData& Item, int32 Quantity);

	UFUNCTION()
	bool AddItemToItemsHistory(const FInventoryItemData& Item);
	
};
