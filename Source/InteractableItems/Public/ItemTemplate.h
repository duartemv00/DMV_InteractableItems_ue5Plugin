// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "ItemTemplate.generated.h"


UENUM(BlueprintType)
enum class EItemUsability : uint8
{
	Inspectable,
	AutoRead,
	OnlyStorable
};

USTRUCT(BlueprintType)
struct FInteractableItemData
{
	GENERATED_BODY()

	// ***** Variables that determine the item's identity ***** //
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Tag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UTexture2D> Icon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStreamableRenderAsset> Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USoundWave> InteractSound;

	// ***** Booleans that determine functionalities of the item ***** //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities")
	EItemUsability Usability;
	// True if the item is automatically read when interacted with
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities",
		meta = (EditCondition = "Usability == EItemUsability::Inspectable"))
	bool bReadable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities",
		meta = (EditCondition = "Usability == EItemUsability::Inspectable || Usability == EItemUsability::AutoRead"))
	bool bStorable;

	// True if you want the item to be stored in a history log of findings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities")
	bool bHistory;
	// True if you want the item to trigger a gameplay effect when used
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities")
	bool bUsable;
	// True if you want to have multiple of the same item in your inventory
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities")
	bool bStackable;
	// True if you want the item to be constructable from other items
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Functionalities")
	bool bCraftable;

	// ***** Variables that determine the item's characteristics ***** //
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;
};

UCLASS(BlueprintType, Blueprintable)
class INTERACTABLEITEMS_API UItemDatabase : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FInteractableItemData Item;
};
