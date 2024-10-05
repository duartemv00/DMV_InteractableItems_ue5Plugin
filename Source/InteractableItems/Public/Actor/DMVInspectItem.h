// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/DMVInteractableItemsInterface.h"
#include "DMVInspectItem.generated.h"

class UDMVInspectWidget;

UCLASS()
class INTERACTABLEITEMS_API ADMVInspectItem : public AActor, public IDMVInteractableItemsInterface
{
	GENERATED_BODY()

public:
	ADMVInspectItem();
	
	virtual void Inspect_Implementation(
		ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FName& GivenItemName, FName& GivenItemDescription) override;
	virtual void Read_Implementation(ACharacter* InteractingCharacter, FText& ReadableText) override;

	UPROPERTY(BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> InspectWidgetClass;

	UFUNCTION(BlueprintCallable)
	void SetInspectRotation(FRotator NewRotation);

	UFUNCTION(BlueprintCallable)
	void SetInspectScale(FVector NewScale);

protected:
	virtual void BeginPlay() override;

	
};
