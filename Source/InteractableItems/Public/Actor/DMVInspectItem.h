// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DMVInspectItem.generated.h"

UCLASS()
class INTERACTABLEITEMS_API ADMVInspectItem : public AActor
{
	GENERATED_BODY()

public:
	ADMVInspectItem();

	UFUNCTION()
	void SetInspectRotation(FRotator NewRotation);

	UFUNCTION()
	void SetInspectScale(FVector NewScale);

protected:
	virtual void BeginPlay() override;

	
};
