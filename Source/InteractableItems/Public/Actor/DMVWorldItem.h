// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemTemplate.h"
#include "GameFramework/Actor.h"
#include "Interface/DMVInteractableItemsInterface.h"
#include "DMVWorldItem.generated.h"

UCLASS()
class INTERACTABLEITEMS_API ADMVWorldItem : public AActor, public IDMVInteractableItemsInterface
{
	GENERATED_BODY()

public:
	ADMVWorldItem();

	UPROPERTY(EditInstanceOnly)
	TObjectPtr<UItemDatabase> ItemData;

	// BEGIN - World Item properties
	UPROPERTY(EditInstanceOnly)
	float InnerInteractRadius = 50.0f;
	UPROPERTY(EditInstanceOnly)
	float OuterInteractRadius = 100.0f;
	// END - World Item properties

	UPROPERTY(EditInstanceOnly)
	FRotator InitialInspectRotation;

	UPROPERTY(EditInstanceOnly)
	FVector InitialInspectScale;

	virtual void OnInteract_Implementation(ACharacter* InteractingCharacter) override;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void SetupItem();

	UFUNCTION()
	void DirectTextRead(ACharacter* InteractingCharacter, APlayerController* PlayerController);

	UFUNCTION()
	void InspectableFunctionality(ACharacter* InteractingCharacter, APlayerController* PlayerController);

	UFUNCTION()
	void ReadText(ACharacter* InteractingCharacter, APlayerController* PlayerController);

	UFUNCTION()
	void StoreItem(ACharacter* InteractingCharacter, APlayerController* PlayerController);
	
	UPROPERTY()
	TObjectPtr<USceneComponent> NewRootComponent;

	// BEGIN - Collision functionality
	UPROPERTY()
	TObjectPtr<class USphereComponent> InnerSphereCollision;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TObjectPtr<UBillboardComponent> InnerInteractIcon;
	UPROPERTY()
	TObjectPtr<USphereComponent> OuterSphereTrigger;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TObjectPtr<UBillboardComponent> OuterInteractIcon;
	// END - Collision functionality

	// BEGIN - Item properties
	UPROPERTY(BlueprintReadOnly)
	FGameplayTag Tag;
	UPROPERTY(BlueprintReadOnly)
	FName ItemName;
	UPROPERTY(BlueprintReadOnly)
	FName ItemDescription;
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UTexture2D> ItemIcon;
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> ItemStaticMesh;
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<USoundWave> ItemInteractSound;
	
	// Is the item inspectable?
	UPROPERTY()
	EItemUsability ItemUsability;
	UFUNCTION(BlueprintCallable) // Getter
	EItemUsability GetIsItemUsability() const { return ItemUsability; }
	UPROPERTY()
	// Is the item readable?
	bool bIsReadable;
	UFUNCTION(BlueprintCallable) // Getter
	bool GetIsReadable() const { return bIsReadable; }
	UPROPERTY()
	// Is the item auto-read?
	bool bIsStorable;
	UFUNCTION(BlueprintCallable) // Getter
	bool GetIsAutoRead() const { return bIsStorable; }
	
	UPROPERTY()
	bool bIsHistory;
	
	UPROPERTY()
	bool bIsUsable;

	UPROPERTY()
	bool bIsStackable;

	UPROPERTY()
	bool bIsCraftable;

	UPROPERTY()
	float ItemWeight;
	UPROPERTY()
	float ItemValue;

	bool bReadControl = false;
	// END - Item properties

#if WITH_EDITOR
protected:
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif	
};
