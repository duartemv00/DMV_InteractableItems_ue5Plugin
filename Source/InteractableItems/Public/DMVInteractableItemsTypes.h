// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

#include "DMVInteractableItemsTypes.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemData
{
	GENERATED_BODY()
	
	// ***** Variables that determine the item's identity ***** //
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag Tag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<UTexture2D> Icon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<UStreamableRenderAsset> Mesh;

	// ***** Booleans that determine functionalities of the item ***** //
	// True if you can closely inspect the item moving it around in your hands
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsInspectable;
	// True if you can read the item (e.g. a book or a note)
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsReadable;
	// True if you want the item to be stored in a history log of findings
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsHistory;
	// True if you want the item to trigger a gameplay effect when used
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsUsable;
	// True if you want to have multiple of the same item in your inventory
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsStackable;
	// True if you want the item to be constructable from other items
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsCraftable;

	// ***** Variables that determine the item's characteristics ***** //
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;
	
	// List of items needed to craft this item (if any)
	// UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTag> CraftingItems;

	// Default constructor
	FInventoryItemData() :
	Tag(FGameplayTag::EmptyTag), Name(""), Description(""), Icon(nullptr), Mesh(nullptr),
	bIsInspectable(false), bIsReadable(false), bIsHistory(false), bIsUsable(false), bIsStackable(false), bIsCraftable(false),
	Weight(0.0f), Value(0.0f) {}

	// Value constructor
	FInventoryItemData(
		FGameplayTag Tag, FString Name, FString Description, UTexture2D* Icon, UStreamableRenderAsset* Mesh,
		bool bIsInspectable, bool bIsReadable, bool bIsHistory, bool bIsUsable, bool bIsStackable, bool bIsCraftable,
		float Weight, float Value) :
	Tag(Tag), Name(Name), Description(Description), Icon(Icon), Mesh(Mesh),
	bIsInspectable(bIsInspectable), bIsReadable(bIsReadable), bIsHistory(bIsHistory), bIsUsable(bIsUsable), bIsStackable(bIsStackable), bIsCraftable(bIsCraftable),
	Weight(Weight), Value(Value) {}

	// Copy constructor
	FInventoryItemData(const FInventoryItemData& Other) :
	Tag(Other.Tag), Name(Other.Name), Description(Other.Description), Icon(Other.Icon), Mesh(Other.Mesh),
	bIsInspectable(Other.bIsInspectable), bIsReadable(Other.bIsReadable), bIsHistory(Other.bIsHistory), bIsUsable(Other.bIsUsable), bIsStackable(Other.bIsStackable), bIsCraftable(Other.bIsCraftable),
	Weight(Other.Weight), Value(Other.Value) {}

	// Assignment operator override
	bool operator==(const FInventoryItemData& Other) const
	{
		return (Tag == Other.Tag &&
			Name == Other.Name &&
			Description == Other.Description &&
			Icon == Other.Icon &&
			Mesh == Other.Mesh &&
			bIsInspectable == Other.bIsInspectable &&
			bIsReadable == Other.bIsReadable &&
			bIsHistory == Other.bIsHistory &&
			bIsUsable == Other.bIsUsable &&
			bIsStackable == Other.bIsStackable &&
			bIsCraftable == Other.bIsCraftable &&
			Weight == Other.Weight &&
			Value == Other.Value);
	}
};

// Hash function for FInteractableItemData
#if UE_BUILD_DEBUG
uint32 GetTypeHash(const FInteractableItemData& Item);
#else
FORCEINLINE uint32 GetTypeHash(const FInventoryItemData& Item)
{
	uint32 Hash = FCrc::MemCrc32(&Item, sizeof(FInventoryItemData));
	return Hash;
}
#endif

