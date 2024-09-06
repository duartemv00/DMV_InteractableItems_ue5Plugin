// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/Actor/DMVWorldItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVWorldItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_ADMVWorldItem();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_ADMVWorldItem_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UItemDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class ADMVWorldItem Function DirectTextRead
struct Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics
{
	struct DMVWorldItem_eventDirectTextRead_Parms
	{
		ACharacter* InteractingCharacter;
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVWorldItem_eventDirectTextRead_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVWorldItem_eventDirectTextRead_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::NewProp_InteractingCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMVWorldItem, nullptr, "DirectTextRead", nullptr, nullptr, Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::DMVWorldItem_eventDirectTextRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::DMVWorldItem_eventDirectTextRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADMVWorldItem_DirectTextRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMVWorldItem_DirectTextRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADMVWorldItem::execDirectTextRead)
{
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DirectTextRead(Z_Param_InteractingCharacter,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class ADMVWorldItem Function DirectTextRead

// Begin Class ADMVWorldItem Function InteractItem
struct Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics
{
	struct DMVWorldItem_eventInteractItem_Parms
	{
		ACharacter* InteractingCharacter;
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVWorldItem_eventInteractItem_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVWorldItem_eventInteractItem_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::NewProp_InteractingCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMVWorldItem, nullptr, "InteractItem", nullptr, nullptr, Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::DMVWorldItem_eventInteractItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::DMVWorldItem_eventInteractItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADMVWorldItem_InteractItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMVWorldItem_InteractItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADMVWorldItem::execInteractItem)
{
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractItem(Z_Param_InteractingCharacter,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class ADMVWorldItem Function InteractItem

// Begin Class ADMVWorldItem Function SetupItem
struct Z_Construct_UFunction_ADMVWorldItem_SetupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMVWorldItem_SetupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMVWorldItem, nullptr, "SetupItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVWorldItem_SetupItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADMVWorldItem_SetupItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADMVWorldItem_SetupItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMVWorldItem_SetupItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADMVWorldItem::execSetupItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupItem();
	P_NATIVE_END;
}
// End Class ADMVWorldItem Function SetupItem

// Begin Class ADMVWorldItem
void ADMVWorldItem::StaticRegisterNativesADMVWorldItem()
{
	UClass* Class = ADMVWorldItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DirectTextRead", &ADMVWorldItem::execDirectTextRead },
		{ "InteractItem", &ADMVWorldItem::execInteractItem },
		{ "SetupItem", &ADMVWorldItem::execSetupItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVWorldItem);
UClass* Z_Construct_UClass_ADMVWorldItem_NoRegister()
{
	return ADMVWorldItem::StaticClass();
}
struct Z_Construct_UClass_ADMVWorldItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DMVWorldItem.h" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "DMVWorldItem" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerInteractRadius_MetaData[] = {
		{ "Category", "DMVWorldItem" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterInteractRadius_MetaData[] = {
		{ "Category", "DMVWorldItem" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSphereCollision_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerInteractIcon_MetaData[] = {
		{ "Category", "DMVWorldItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterSphereTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterInteractIcon_MetaData[] = {
		{ "Category", "DMVWorldItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInteractSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInspectable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutoRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHistory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCraftable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVWorldItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerInteractRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterInteractRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerSphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerInteractIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterSphereTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterInteractIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInteractSound;
	static void NewProp_bIsInspectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInspectable;
	static void NewProp_bIsReadable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadable;
	static void NewProp_bIsAutoRead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutoRead;
	static void NewProp_bIsHistory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHistory;
	static void NewProp_bIsUsable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsable;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static void NewProp_bIsCraftable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCraftable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMVWorldItem_DirectTextRead, "DirectTextRead" }, // 51691305
		{ &Z_Construct_UFunction_ADMVWorldItem_InteractItem, "InteractItem" }, // 4059857962
		{ &Z_Construct_UFunction_ADMVWorldItem_SetupItem, "SetupItem" }, // 1154750904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVWorldItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemData), Z_Construct_UClass_UItemDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_InnerInteractRadius = { "InnerInteractRadius", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, InnerInteractRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerInteractRadius_MetaData), NewProp_InnerInteractRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_OuterInteractRadius = { "OuterInteractRadius", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, OuterInteractRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterInteractRadius_MetaData), NewProp_OuterInteractRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_NewRootComponent = { "NewRootComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, NewRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRootComponent_MetaData), NewProp_NewRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_InnerSphereCollision = { "InnerSphereCollision", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, InnerSphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSphereCollision_MetaData), NewProp_InnerSphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_InnerInteractIcon = { "InnerInteractIcon", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, InnerInteractIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerInteractIcon_MetaData), NewProp_InnerInteractIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_OuterSphereTrigger = { "OuterSphereTrigger", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, OuterSphereTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterSphereTrigger_MetaData), NewProp_OuterSphereTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_OuterInteractIcon = { "OuterInteractIcon", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, OuterInteractIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterInteractIcon_MetaData), NewProp_OuterInteractIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemStaticMesh = { "ItemStaticMesh", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStaticMesh_MetaData), NewProp_ItemStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemInteractSound = { "ItemInteractSound", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemInteractSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInteractSound_MetaData), NewProp_ItemInteractSound_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsInspectable_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsInspectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsInspectable = { "bIsInspectable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsInspectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInspectable_MetaData), NewProp_bIsInspectable_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsReadable_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsReadable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsReadable = { "bIsReadable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsReadable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadable_MetaData), NewProp_bIsReadable_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsAutoRead_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsAutoRead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsAutoRead = { "bIsAutoRead", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsAutoRead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutoRead_MetaData), NewProp_bIsAutoRead_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsHistory_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsHistory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsHistory = { "bIsHistory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsHistory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHistory_MetaData), NewProp_bIsHistory_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsUsable_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsUsable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsUsable = { "bIsUsable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsUsable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsable_MetaData), NewProp_bIsUsable_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
void Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsCraftable_SetBit(void* Obj)
{
	((ADMVWorldItem*)Obj)->bIsCraftable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsCraftable = { "bIsCraftable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVWorldItem), &Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsCraftable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCraftable_MetaData), NewProp_bIsCraftable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVWorldItem, ItemValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemValue_MetaData), NewProp_ItemValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMVWorldItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_InnerInteractRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_OuterInteractRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_NewRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_InnerSphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_InnerInteractIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_OuterSphereTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_OuterInteractIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemInteractSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsInspectable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsReadable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsAutoRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsUsable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_bIsCraftable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVWorldItem_Statics::NewProp_ItemValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVWorldItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADMVWorldItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVWorldItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADMVWorldItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister, (int32)VTABLE_OFFSET(ADMVWorldItem, IDMVInteractableItemsInterface), false },  // 2007367866
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVWorldItem_Statics::ClassParams = {
	&ADMVWorldItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADMVWorldItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADMVWorldItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVWorldItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVWorldItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVWorldItem()
{
	if (!Z_Registration_Info_UClass_ADMVWorldItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVWorldItem.OuterSingleton, Z_Construct_UClass_ADMVWorldItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVWorldItem.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<ADMVWorldItem>()
{
	return ADMVWorldItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVWorldItem);
ADMVWorldItem::~ADMVWorldItem() {}
// End Class ADMVWorldItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVWorldItem, ADMVWorldItem::StaticClass, TEXT("ADMVWorldItem"), &Z_Registration_Info_UClass_ADMVWorldItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVWorldItem), 2859721345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_62824275(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
