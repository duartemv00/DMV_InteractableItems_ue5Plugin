// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/DMVInspectItem.h"

#include "../../../../../../../../../../Program Files/Epic Games/UE_5.4/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
#include "Blueprint/UserWidget.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/HUD/DMVHUD.h"


ADMVInspectItem::ADMVInspectItem()
{
	PrimaryActorTick.bCanEverTick = false;
	
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	ItemCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ItemCaptureComponent"));
	ItemCaptureComponent->AttachToComponent(ItemMesh, FAttachmentTransformRules::KeepRelativeTransform);
}

void ADMVInspectItem::Inspect_Implementation(ACharacter* InteractingCharacter, UStaticMesh* InspectedItem,
	FName& GivenItemName, FName& GivenItemDescription)
{
	UE_LOG(LogTemp, Warning, TEXT("InspectItem triggered"));  

	InteractingCharacterRef = InteractingCharacter;
	InteractingCharacterControllerRef = Cast<APlayerController>(InteractingCharacter->GetController());
	
	ItemMesh->SetStaticMesh(InspectedItem);
	
	// Create the Inspect Widget
	if(APlayerController* InteractingPlayerController = Cast<APlayerController>(InteractingCharacter->GetController()))
	{
		if(ADMVHUD* DMVHUD = Cast<ADMVHUD>(InteractingPlayerController->GetHUD()))
		{
			DMVHUD->InitInspect(InteractingPlayerController, GivenItemName, GivenItemDescription);
			bInspectWidgetCreated = true;
		}
	}

	// Change input from the Character to this InspectActor to allow for rotation and scaling
	if(bInspectWidgetCreated)
	{
		InteractingCharacter->DisableInput(InteractingCharacterControllerRef);
		this->EnableInput(InteractingCharacterControllerRef);
	}

	bReading = false;
}


void ADMVInspectItem::Read_Implementation(ACharacter* InteractingCharacter, FText& ReadableText)
{
	// Create the Reading Widget
	if(APlayerController* InteractingPlayerController = Cast<APlayerController>(InteractingCharacter->GetController()))
	{
		if(ADMVHUD* DMVHUD = Cast<ADMVHUD>(InteractingPlayerController->GetHUD()))
		{
			// Crea el WBP de lectura (y lo inicializa con el valor del texto, y pone el valor de SetRenderOpacity del ReadBorder a 1)
			bReadingWidgetCreated = true;
		}
	}
	
	// Change input from the Character to this Actor to allow for reading
	if(bReadingWidgetCreated)
	{
		InteractingCharacter->DisableInput(InteractingCharacterControllerRef);
		this->EnableInput(InteractingCharacterControllerRef);
	}

	bReading = true;
}

void ADMVInspectItem::SetInspectRotation(FRotator InRotation)
{
	InitialRotation = InRotation;
	ItemMesh->SetWorldTransform(FTransform(InitialRotation, ItemMesh->GetComponentLocation(), ItemMesh->GetComponentScale()));
}

void ADMVInspectItem::SetInspectScale(FVector InScale)
{
	InitialScale = InScale;
	ItemMesh->SetWorldTransform(FTransform(ItemMesh->GetComponentRotation(), ItemMesh->GetComponentLocation(), InitialScale));
}

void ADMVInspectItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADMVInspectItem::ActivateItemRotation(const FInputActionValue& Value)
{
	bCanRotateItem = true;
}

void ADMVInspectItem::DeactivateItemRotation(const FInputActionValue& Value)
{
	bCanRotateItem = false;
}

void ADMVInspectItem::ToggleReading(const FInputActionValue& Value)
{
	if(bReading)
	{
		// TODO: ReadWidgetRef->NoteCanvas->SetRenderOpacity(0.f);
		bReading = false;
	} else
	{
		// TODO: ReadWidgetRef->NoteCanvas->SetRenderOpacity(1.f);
		bReading = true;
	}
}

void ADMVInspectItem::RotateItemHorizontal(const FInputActionValue& Value)
{
	if(!bReading && bCanRotateItem)
	{
		ItemMesh->SetWorldRotation(UKismetMathLibrary::ComposeRotators(ItemMesh->GetComponentRotation(),
			FRotator(0, 0,Value.Get<FInputActionValue::Axis1D>() * -3.f)));
	}
}

void ADMVInspectItem::RotateItemVertical(const FInputActionValue& Value)
{
	if(!bReading && bCanRotateItem)
	{
		ItemMesh->SetWorldRotation(UKismetMathLibrary::ComposeRotators(ItemMesh->GetComponentRotation(),
			FRotator(0, Value.Get<FInputActionValue::Axis1D>() * -3.f, 0)));
	}
}

void ADMVInspectItem::ItemScaleUp(const FInputActionValue& Value)
{
	if(!bReading)
	{
		FMath::Clamp(ItemCaptureComponent->FOVAngle += 1, 30, 80);
	}
}

void ADMVInspectItem::ItemScaleDown(const FInputActionValue& Value)
{
	if(!bReading)
	{
		FMath::Clamp(ItemCaptureComponent->FOVAngle -= 1, 30, 80);
	}
}

void ADMVInspectItem::ResetItemTransforms(const FInputActionValue& Value)
{
	if(!bReading)
	{
		ItemMesh->SetWorldRotation(InitialRotation);
		ItemCaptureComponent->FOVAngle = DefaultFOV;
	}
}

void ADMVInspectItem::CloseInteraction(const FInputActionValue& Value)
{
	this->DisableInput(InteractingCharacterControllerRef);
	InteractingCharacterRef->EnableInput(InteractingCharacterControllerRef);
	// TODO: Destroy the Inspect Widget
	// TODO: Destroy the Read Widget
	SetLifeSpan(0.1f); // Destroy Actor
}

