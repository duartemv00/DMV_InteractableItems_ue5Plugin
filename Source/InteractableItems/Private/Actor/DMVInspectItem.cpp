// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/DMVInspectItem.h"

#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "UI/DMVInspectWidget.h"


ADMVInspectItem::ADMVInspectItem()
{
	PrimaryActorTick.bCanEverTick = false;
	
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void ADMVInspectItem::Inspect_Implementation(ACharacter* InteractingCharacter, UStaticMesh* InspectedItem,
	FName& GivenItemName, FName& GivenItemDescription)
{
	IDMVInteractableItemsInterface::Inspect_Implementation(InteractingCharacter, InspectedItem, GivenItemName,
    	                                                       GivenItemDescription);
	UE_LOG(LogTemp, Warning, TEXT("Inspect function triggered"));                                              

	APlayerController* InteractingCharacterController = Cast<APlayerController>(InteractingCharacter->GetController());
	
	ItemMesh->SetStaticMesh(InspectedItem);
	
	// Create the widget
	if(InspectWidgetClass != NULL)
	{
		UUserWidget* InspectWidget = CreateWidget<UUserWidget>(InteractingCharacterController, InspectWidgetClass);
		if(InspectWidget)
		{
			// TODO: Initialize the widget with the text values
			InspectWidget->AddToViewport();
		}
	}
	
	
	
	
	// if(UDMVInspectWidget* aux = Cast<UDMVInspectWidget>(InspectWidget))
	// {
	// 	//aux->InitializeWidget(GivenItemName, GivenItemDescription);
	// 	
	//
	// 	// Change input from the Character to this InspectActor
	// 	
	// 	InteractingCharacter->DisableInput(InteractingCharacterController);
	// 	this->EnableInput(InteractingCharacterController);
	// }
}


void ADMVInspectItem::Read_Implementation(ACharacter* InteractingCharacter, FText& ReadableText)
{
	// IDMVInteractableItemsInterface::Read_Implementation(InteractingCharacter, ReadableText);
}

void ADMVInspectItem::SetInspectRotation(FRotator NewRotation)
{
	FRotator InitialRotation = NewRotation;
	ItemMesh->SetWorldTransform(FTransform(InitialRotation, ItemMesh->GetComponentLocation(), ItemMesh->GetComponentScale()));
}

void ADMVInspectItem::SetInspectScale(FVector NewScale)
{
	ItemMesh->SetWorldTransform(FTransform(ItemMesh->GetComponentRotation(), ItemMesh->GetComponentLocation(), NewScale));
}

void ADMVInspectItem::BeginPlay()
{
	Super::BeginPlay();
	
}

