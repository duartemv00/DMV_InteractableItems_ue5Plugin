// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/DMVInspectItem.h"


ADMVInspectItem::ADMVInspectItem()
{
	PrimaryActorTick.bCanEverTick = false;
	
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
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

