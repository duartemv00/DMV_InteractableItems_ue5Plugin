// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/Component/DMVInventoryComponent.h"
#include "InteractableItems/Public/DMVInteractableItemsTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInventoryComponent();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInventoryComponent_NoRegister();
INTERACTABLEITEMS_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVInventoryComponent Function AddItemToItemsHistory
struct Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics
{
	struct DMVInventoryComponent_eventAddItemToItemsHistory_Parms
	{
		FInventoryItemData Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DMVInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInventoryComponent_eventAddItemToItemsHistory_Parms, Item), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2349145018
void Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DMVInventoryComponent_eventAddItemToItemsHistory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVInventoryComponent_eventAddItemToItemsHistory_Parms), &Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVInventoryComponent, nullptr, "AddItemToItemsHistory", nullptr, nullptr, Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::DMVInventoryComponent_eventAddItemToItemsHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::DMVInventoryComponent_eventAddItemToItemsHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVInventoryComponent::execAddItemToItemsHistory)
{
	P_GET_STRUCT_REF(FInventoryItemData,Z_Param_Out_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemToItemsHistory(Z_Param_Out_Item);
	P_NATIVE_END;
}
// End Class UDMVInventoryComponent Function AddItemToItemsHistory

// Begin Class UDMVInventoryComponent Function AddItemToStoredItems
struct Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics
{
	struct DMVInventoryComponent_eventAddItemToStoredItems_Parms
	{
		FInventoryItemData Item;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DMVInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInventoryComponent_eventAddItemToStoredItems_Parms, Item), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2349145018
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInventoryComponent_eventAddItemToStoredItems_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DMVInventoryComponent_eventAddItemToStoredItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVInventoryComponent_eventAddItemToStoredItems_Parms), &Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVInventoryComponent, nullptr, "AddItemToStoredItems", nullptr, nullptr, Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::DMVInventoryComponent_eventAddItemToStoredItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::DMVInventoryComponent_eventAddItemToStoredItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVInventoryComponent::execAddItemToStoredItems)
{
	P_GET_STRUCT_REF(FInventoryItemData,Z_Param_Out_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemToStoredItems(Z_Param_Out_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UDMVInventoryComponent Function AddItemToStoredItems

// Begin Class UDMVInventoryComponent Function RemoveItemFromStoredItems
struct Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics
{
	struct DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms
	{
		FInventoryItemData Item;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DMVInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms, Item), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2349145018
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms), &Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVInventoryComponent, nullptr, "RemoveItemFromStoredItems", nullptr, nullptr, Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::DMVInventoryComponent_eventRemoveItemFromStoredItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVInventoryComponent::execRemoveItemFromStoredItems)
{
	P_GET_STRUCT_REF(FInventoryItemData,Z_Param_Out_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemFromStoredItems(Z_Param_Out_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UDMVInventoryComponent Function RemoveItemFromStoredItems

// Begin Class UDMVInventoryComponent
void UDMVInventoryComponent::StaticRegisterNativesUDMVInventoryComponent()
{
	UClass* Class = UDMVInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToItemsHistory", &UDMVInventoryComponent::execAddItemToItemsHistory },
		{ "AddItemToStoredItems", &UDMVInventoryComponent::execAddItemToStoredItems },
		{ "RemoveItemFromStoredItems", &UDMVInventoryComponent::execRemoveItemFromStoredItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVInventoryComponent);
UClass* Z_Construct_UClass_UDMVInventoryComponent_NoRegister()
{
	return UDMVInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UDMVInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DMVInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Component/DMVInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredItems_MetaData[] = {
		{ "Category", "DMVInventoryComponent" },
		{ "ModuleRelativePath", "Public/Component/DMVInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsHistory_MetaData[] = {
		{ "Category", "DMVInventoryComponent" },
		{ "ModuleRelativePath", "Public/Component/DMVInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StoredItems_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StoredItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMVInventoryComponent_AddItemToItemsHistory, "AddItemToItemsHistory" }, // 4265186250
		{ &Z_Construct_UFunction_UDMVInventoryComponent_AddItemToStoredItems, "AddItemToStoredItems" }, // 2195834658
		{ &Z_Construct_UFunction_UDMVInventoryComponent_RemoveItemFromStoredItems, "RemoveItemFromStoredItems" }, // 2361527852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_StoredItems_ValueProp = { "StoredItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_StoredItems_Key_KeyProp = { "StoredItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2349145018
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_StoredItems = { "StoredItems", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVInventoryComponent, StoredItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredItems_MetaData), NewProp_StoredItems_MetaData) }; // 2349145018
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_ItemsHistory_Inner = { "ItemsHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_ItemsHistory = { "ItemsHistory", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVInventoryComponent, ItemsHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsHistory_MetaData), NewProp_ItemsHistory_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMVInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_StoredItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_StoredItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_StoredItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_ItemsHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInventoryComponent_Statics::NewProp_ItemsHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDMVInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDMVInventoryComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister, (int32)VTABLE_OFFSET(UDMVInventoryComponent, IDMVInteractableItemsInterface), false },  // 767820097
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVInventoryComponent_Statics::ClassParams = {
	&UDMVInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDMVInventoryComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInventoryComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UDMVInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVInventoryComponent.OuterSingleton, Z_Construct_UClass_UDMVInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVInventoryComponent.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVInventoryComponent>()
{
	return UDMVInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVInventoryComponent);
UDMVInventoryComponent::~UDMVInventoryComponent() {}
// End Class UDMVInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVInventoryComponent, UDMVInventoryComponent::StaticClass, TEXT("UDMVInventoryComponent"), &Z_Registration_Info_UClass_UDMVInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVInventoryComponent), 2455882832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_1270743838(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
