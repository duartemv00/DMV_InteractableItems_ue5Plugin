// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/DMVInteractableItemsTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVInteractableItemsTypes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INTERACTABLEITEMS_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin ScriptStruct FInventoryItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemData;
class UScriptStruct* FInventoryItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemData, (UObject*)Z_Construct_UPackage__Script_InteractableItems(), TEXT("InventoryItemData"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UScriptStruct* StaticStruct<FInventoryItemData>()
{
	return FInventoryItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Variables that determine the item's identity ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Variables that determine the item's identity *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInspectable_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Booleans that determine functionalities of the item ***** //\n// True if you can closely inspect the item moving it around in your hands\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Booleans that determine functionalities of the item *****\nTrue if you can closely inspect the item moving it around in your hands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadable_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you can read the item (e.g. a book or a note)\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you can read the item (e.g. a book or a note)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHistory_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want the item to be stored in a history log of findings\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want the item to be stored in a history log of findings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsable_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want the item to trigger a gameplay effect when used\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want the item to trigger a gameplay effect when used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want to have multiple of the same item in your inventory\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want to have multiple of the same item in your inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCraftable_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want the item to be constructable from other items\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want the item to be constructable from other items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Variables that determine the item's characteristics ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Variables that determine the item's characteristics *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/DMVInteractableItemsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_bIsInspectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInspectable;
	static void NewProp_bIsReadable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadable;
	static void NewProp_bIsHistory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHistory;
	static void NewProp_bIsUsable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsable;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static void NewProp_bIsCraftable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCraftable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Mesh), Z_Construct_UClass_UStreamableRenderAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsInspectable_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->bIsInspectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsInspectable = { "bIsInspectable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsInspectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInspectable_MetaData), NewProp_bIsInspectable_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsReadable_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->bIsReadable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsReadable = { "bIsReadable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsReadable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadable_MetaData), NewProp_bIsReadable_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsHistory_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->bIsHistory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsHistory = { "bIsHistory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsHistory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHistory_MetaData), NewProp_bIsHistory_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsUsable_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->bIsUsable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsUsable = { "bIsUsable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsUsable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsable_MetaData), NewProp_bIsUsable_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsCraftable_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->bIsCraftable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsCraftable = { "bIsCraftable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsCraftable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCraftable_MetaData), NewProp_bIsCraftable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsInspectable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsReadable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsUsable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_bIsCraftable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
	nullptr,
	&NewStructOps,
	"InventoryItemData",
	Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers),
	sizeof(FInventoryItemData),
	alignof(FInventoryItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton;
}
// End ScriptStruct FInventoryItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_DMVInteractableItemsTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemData::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewStructOps, TEXT("InventoryItemData"), &Z_Registration_Info_UScriptStruct_InventoryItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemData), 2349145018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_DMVInteractableItemsTypes_h_582196022(TEXT("/Script/InteractableItems"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_DMVInteractableItemsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_DMVInteractableItemsTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
