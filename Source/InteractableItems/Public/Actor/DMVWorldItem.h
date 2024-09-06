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

	UPROPERTY(EditInstanceOnly)
	float InnerInteractRadius = 50.0f;
	UPROPERTY(EditInstanceOnly)
	float OuterInteractRadius = 100.0f;

	virtual void OnInteract_Implementation(ACharacter* InteractingCharacter) override;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void SetupItem();

	UFUNCTION()
	void DirectTextRead(ACharacter* InteractingCharacter, APlayerController* PlayerController);

	UFUNCTION()
	void InteractItem(ACharacter* InteractingCharacter, APlayerController* PlayerController);

private:
	UPROPERTY()
	TObjectPtr<USceneComponent> NewRootComponent;
	
	UPROPERTY()
	TObjectPtr<class USphereComponent> InnerSphereCollision;
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UBillboardComponent> InnerInteractIcon;
	UPROPERTY()
	TObjectPtr<USphereComponent> OuterSphereTrigger;
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UBillboardComponent> OuterInteractIcon;
	
	UPROPERTY()
	FGameplayTag Tag;
	UPROPERTY()
	FName ItemName;
	UPROPERTY()
	FName ItemDescription;
	UPROPERTY()
	TObjectPtr<UTexture2D> ItemIcon;
	UPROPERTY()
	TObjectPtr<UStaticMeshComponent> ItemStaticMesh;
	UPROPERTY()
	TObjectPtr<USoundWave> ItemInteractSound;
	UPROPERTY()
	bool bIsInspectable;
	UPROPERTY()
	bool bIsReadable;
	UPROPERTY()
	bool bIsAutoRead;
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

#if WITH_EDITOR
protected:
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif	
};
