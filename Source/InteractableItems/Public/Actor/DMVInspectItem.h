// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/DMVInteractableItemsInterface.h"
#include "DMVInspectItem.generated.h"

UCLASS()
class INTERACTABLEITEMS_API ADMVInspectItem : public AActor, public IDMVInteractableItemsInterface
{
	GENERATED_BODY()

public:
	ADMVInspectItem();

	UPROPERTY(BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	UFUNCTION(BlueprintCallable)
	void SetInspectRotation(FRotator NewRotation);

	UFUNCTION(BlueprintCallable)
	void SetInspectScale(FVector NewScale);

protected:
	virtual void BeginPlay() override;

	
};
