// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/DMVUserWidget.h"

void UDMVUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
