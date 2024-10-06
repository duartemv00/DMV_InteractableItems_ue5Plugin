// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/DMVWorldItem.h"

#include "Actor/DMVInspectItem.h"
#include "Blueprint/UserWidget.h"
#include "Components/BillboardComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Interface/DMVInteractableItemsInterface.h"
#include "UI/Widget/DMVUserWidget.h"

ADMVWorldItem::ADMVWorldItem()
{
	PrimaryActorTick.bCanEverTick = false;

	NewRootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	SetRootComponent(NewRootComponent);

	ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	ItemStaticMesh->SetupAttachment(RootComponent);

	OuterSphereTrigger = CreateDefaultSubobject<USphereComponent>("OuterSphereTrigger");
	OuterSphereTrigger->SetupAttachment(RootComponent);
	OuterSphereTrigger->SetSphereRadius(InnerInteractRadius);

	OuterInteractIcon = CreateDefaultSubobject<UBillboardComponent>("OuterInteractIcon");
	OuterInteractIcon->SetupAttachment(OuterSphereTrigger);
	OuterSphereTrigger->SetSphereRadius(OuterInteractRadius);

	InnerSphereCollision = CreateDefaultSubobject<USphereComponent>("InnerSphereCollision");
	InnerSphereCollision->SetupAttachment(RootComponent);

	InnerInteractIcon = CreateDefaultSubobject<UBillboardComponent>("InnerInteractIcon");
	InnerInteractIcon->SetupAttachment(InnerSphereCollision);

	SetupItem();
}

void ADMVWorldItem::OnInteract_Implementation(ACharacter* InteractingCharacter)
{
	// IDMVInteractableItemsInterface::OnInteract_Implementation();

	APlayerController* PlayerController = Cast<APlayerController>(InteractingCharacter->GetController());
	if (!PlayerController)
	{
		return;
	}

	if(ItemInteractSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ItemInteractSound, GetActorLocation());
	}

	switch (ItemUsability)
	{
	case EItemUsability::AutoRead:
		DirectTextRead(InteractingCharacter, PlayerController);
		break;
	case EItemUsability::Inspectable:
		InspectableFunctionality(InteractingCharacter);
		break;
	case EItemUsability::OnlyStorable:
		// TODO: StoreItem(InteractingCharacter, PlayerController);
		break;
	}
}

void ADMVWorldItem::BeginPlay()
{
	Super::BeginPlay();
	SetupItem();
}

/*
 * Read the item's data and set up the item's properties
 */
void ADMVWorldItem::SetupItem()
{
	if (ItemData)
	{
		// --> Set the item's identity
		Tag = ItemData->Item.Tag;
		ItemName = ItemData->Item.Name;
		ItemDescription = ItemData->Item.Description;
		ItemIcon = ItemData->Item.Icon;
		// Set the item's mesh
		ItemStaticMesh->SetStaticMesh(Cast<UStaticMesh>(ItemData->Item.Mesh));
		// Set the item's sound when interacting
		ItemInteractSound = ItemData->Item.InteractSound;
		// --> Set the item's functionalities
		ItemUsability = ItemData->Item.Usability;
		bIsReadable = ItemData->Item.bReadable;
		bIsStorable = ItemData->Item.bStorable;
		bIsHistory = ItemData->Item.bHistory;
		bIsUsable = ItemData->Item.bUsable;
		bIsStackable = ItemData->Item.bStackable;
		bIsCraftable = ItemData->Item.bCraftable;
		// --> Set the item's characteristics
		ItemWeight = ItemData->Item.Weight;
		ItemValue = ItemData->Item.Value;

		// Set the interaction sphere radius
		OuterSphereTrigger->SetSphereRadius(OuterInteractRadius);
		InnerSphereCollision->SetSphereRadius(InnerInteractRadius);
	}
}

void ADMVWorldItem::DirectTextRead(ACharacter* InteractingCharacter, APlayerController* PlayerController)
{
	if (!bReadControl)
	{
		// TODO: Create a control bool.
		// UDMVUserWidget* ReadWidget =
		// 	CreateWidget<UDMVUserWidget>(GetWorld(), UReadableTextWidget::StaticClass(), "Read");
		// ReadWidget->AddToViewport();
		DisableInput(PlayerController);
		PlayerController->SetIgnoreLookInput(true);
		// TODO: Set Render Opacity to 1.0f.

		bReadControl = true;
	}
	else
	{
		// TODO: Set Render Opacity to 0.f.
		// TODO: ReadWidget->RemoveFromParent();
		InteractingCharacter->GetCharacterMovement()->SetMovementMode(
			InteractingCharacter->GetCharacterMovement()->DefaultLandMovementMode);

		PlayerController->SetIgnoreLookInput(false);

		bReadControl = false;
	}
}

void ADMVWorldItem::InspectableFunctionality(ACharacter* InteractingCharacter)
{
	FActorSpawnParameters SpawnParams;
	ADMVInspectItem* InspectItem = GetWorld()->SpawnActor<ADMVInspectItem>(ADMVInspectItem::StaticClass());
	InspectItem->SetActorLocation(FVector(1000000000000, 0, 0));
	
	InspectItem->SetInspectRotation(InitialInspectRotation);
	InspectItem->SetInspectScale(InitialInspectScale);

	if (InspectItem->GetClass()->ImplementsInterface(UDMVInteractableItemsInterface::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("InspectItem implements the interface"));

		InspectItem->Inspect_Implementation(InteractingCharacter, ItemStaticMesh->GetStaticMesh(),
			ItemName, ItemDescription);
	}
}

void ADMVWorldItem::ReadText(ACharacter* InteractingCharacter, APlayerController* PlayerController)
{
}

void ADMVWorldItem::StoreItem(ACharacter* InteractingCharacter, APlayerController* PlayerController)
{
}

#if WITH_EDITOR
void ADMVWorldItem::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(ADMVWorldItem, ItemData) ||
		PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(ADMVWorldItem, InnerInteractRadius) ||
		PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(ADMVWorldItem, OuterInteractRadius))
	{
		SetupItem();
	}
}
#endif
