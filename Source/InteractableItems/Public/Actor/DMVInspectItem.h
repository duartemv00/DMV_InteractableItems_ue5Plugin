// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "InputActionValue.h"
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
	
	// BEGIN - InspectItem components
	UPROPERTY(BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;
	UPROPERTY(BlueprintReadOnly)
	USceneCaptureComponent2D* ItemCaptureComponent;
	// END - InspectItem components

	// BEGIN - Functionality interface implementation
	virtual void Inspect_Implementation(
		ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FName& GivenItemName, FName& GivenItemDescription) override;
	virtual void Read_Implementation(ACharacter* InteractingCharacter, FText& ReadableText) override;
	// END - Functionality interface implementation

	// BEGIN - InspectItem initialisation
	UFUNCTION(BlueprintCallable)
	void SetInspectRotation(FRotator InRotation);
	UFUNCTION(BlueprintCallable)
	void SetInspectScale(FVector InScale);
	// END - InspectItem initialisation

protected:
	virtual void BeginPlay() override;

	// BEGIN - InspectItem input actions
	void ActivateItemRotation(const FInputActionValue& Value); // Left mouse button (Pressed)
	void DeactivateItemRotation(const FInputActionValue& Value); // Left mouse button (Release)
	void RotateItemHorizontal(const FInputActionValue& Value); // Mouse X
	void RotateItemVertical(const FInputActionValue& Value); // Mouse Y
	void ItemScaleUp(const FInputActionValue& Value); // Mouse wheel up
	void ItemScaleDown(const FInputActionValue& Value); // Mouse wheel down
	void ResetItemTransforms(const FInputActionValue& Value); // Right mouse button
	void ToggleReading(const FInputActionValue& Value); // Space
	void CloseInteraction(const FInputActionValue& Value); // E
	// END - InspectItem input actions

private:
	UPROPERTY()
	ACharacter* InteractingCharacterRef;
	UPROPERTY()
	APlayerController* InteractingCharacterControllerRef;
	
	UPROPERTY()
	FRotator InitialRotation;
	UPROPERTY()
	FVector InitialScale;
	UPROPERTY()
	float DefaultFOV = 50.f;
	
	UPROPERTY()
	bool bInspectWidgetCreated = false;
	UPROPERTY()
	bool bReadingWidgetCreated = false;
	UPROPERTY()
	bool bCanRotateItem = false;
	UPROPERTY()
	bool bReading = false;
};
