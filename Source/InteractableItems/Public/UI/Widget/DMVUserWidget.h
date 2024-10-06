// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DMVUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTABLEITEMS_API UDMVUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InWidgetController);
	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UObject> WidgetController; // This controller is where the widget will get the data from

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();
};
