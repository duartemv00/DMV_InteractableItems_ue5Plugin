// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DMVWidgetController.generated.h"

/*
 *
 */
USTRUCT(BlueprintType)
struct FWidgetControllerParams
{
	GENERATED_BODY()

	FWidgetControllerParams() {}
	FWidgetControllerParams(APlayerController* PC) {}
	FWidgetControllerParams(APlayerController* PC, APlayerState* PS) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerController> PlayerController = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerState> PlayerState = nullptr;
	
	// TODO: Add the rest of the dependencies here
};

/**
 * 
 */
UCLASS()
class INTERACTABLEITEMS_API UDMVWidgetController : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetControllerParams(const FWidgetControllerParams& InWidgetControllerParams);
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerController> PlayerController;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerState> PlayerState;

	// UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	// TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	//
	// UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	// TObjectPtr<UAttributeSet> AttributeSet;
	
	// TODO: Add the rest dependencies of the Widget Controller (To retrieve the data from)
	
};
