// Fill out your copyright notice in the Description page of Project Settings.

#include "Component/DMVInventoryComponent.h"

UDMVInventoryComponent::UDMVInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDMVInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UDMVInventoryComponent::AddItemToStoredItems(const FInventoryItemData& Item, int32 Quantity)
{
	if (Quantity <= 0) // First check if the quantity is greater than 0
	{
		UE_LOG(LogTemp, Warning, TEXT("You can't add 0 items"));
		return false;
	}
	// Check if the item is already in the map
	if (StoredItems.Contains(Item))
	{
		if (!Item.bIsStackable) // If the item is not stackable, return false
		{
			UE_LOG(LogTemp, Warning, TEXT("You can't stack non-stackable items, and you already have this item"));
			return false;
		}
		StoredItems[Item] += Quantity; // If the item is stackable, add the quantity to the existing quantity
		return true;
	}
	// If the item is not in the map, add it
	if (!Item.bIsStackable && Quantity >= 1)
	// but also check if the item is stackable and the quantity is grater than 1
	{
		UE_LOG(LogTemp, Warning, TEXT("You need to change the quantity value to 1 for non-stackable items"));
		return false;
	}
	// New item
	StoredItems.Add(Item, Quantity);
	return true;
}

/*
 * Remove a quantity of a certain item from the stored items
 */
bool UDMVInventoryComponent::RemoveItemFromStoredItems(const FInventoryItemData& Item, const int32 Quantity)
{
	if (Quantity <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("You can't remove 0 items"));
		return false;
	}
	if (!StoredItems.Contains(Item))
	{
		UE_LOG(LogTemp, Warning, TEXT("Item not found in StoredItems"));
		return false;
	}
	if (StoredItems[Item] < Quantity)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quantity to remove is greater than the quantity of the item"));
		return false;
	}
	StoredItems[Item] -= Quantity;
	if (StoredItems[Item] <= 0)
	{
		StoredItems.Remove(Item);
	}
	return true;
}

/*
 * Add an item to the items history, so you can keep track of the items player has found
 */
bool UDMVInventoryComponent::AddItemToItemsHistory(const FInventoryItemData& Item)
{
	if (ItemsHistory.Contains(Item.Tag))
	{
		return false;
	}
	if (!Item.bIsHistory)
	{
		return false;
	}
	ItemsHistory.Add(Item.Tag);
	return true;
}
