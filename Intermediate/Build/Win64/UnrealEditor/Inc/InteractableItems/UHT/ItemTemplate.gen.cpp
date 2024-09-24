// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/ItemTemplate.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemTemplate() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UItemDatabase();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UItemDatabase_NoRegister();
INTERACTABLEITEMS_API UEnum* Z_Construct_UEnum_InteractableItems_EItemUsability();
INTERACTABLEITEMS_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableItemData();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Enum EItemUsability
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemUsability;
static UEnum* EItemUsability_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemUsability.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemUsability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractableItems_EItemUsability, (UObject*)Z_Construct_UPackage__Script_InteractableItems(), TEXT("EItemUsability"));
	}
	return Z_Registration_Info_UEnum_EItemUsability.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UEnum* StaticEnum<EItemUsability>()
{
	return EItemUsability_StaticEnum();
}
struct Z_Construct_UEnum_InteractableItems_EItemUsability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoRead.Name", "EItemUsability::AutoRead" },
		{ "BlueprintType", "true" },
		{ "Inspectable.Name", "EItemUsability::Inspectable" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
		{ "OnlyStorable.Name", "EItemUsability::OnlyStorable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemUsability::Inspectable", (int64)EItemUsability::Inspectable },
		{ "EItemUsability::AutoRead", (int64)EItemUsability::AutoRead },
		{ "EItemUsability::OnlyStorable", (int64)EItemUsability::OnlyStorable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractableItems_EItemUsability_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractableItems,
	nullptr,
	"EItemUsability",
	"EItemUsability",
	Z_Construct_UEnum_InteractableItems_EItemUsability_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractableItems_EItemUsability_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractableItems_EItemUsability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractableItems_EItemUsability_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractableItems_EItemUsability()
{
	if (!Z_Registration_Info_UEnum_EItemUsability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemUsability.InnerSingleton, Z_Construct_UEnum_InteractableItems_EItemUsability_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemUsability.InnerSingleton;
}
// End Enum EItemUsability

// Begin ScriptStruct FInteractableItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractableItemData;
class UScriptStruct* FInteractableItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractableItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableItemData, (UObject*)Z_Construct_UPackage__Script_InteractableItems(), TEXT("InteractableItemData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractableItemData.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UScriptStruct* StaticStruct<FInteractableItemData>()
{
	return FInteractableItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractableItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "InteractableItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Variables that determine the item's identity ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Variables that determine the item's identity *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "InteractableItemData" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "InteractableItemData" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "InteractableItemData" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "InteractableItemData" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractSound_MetaData[] = {
		{ "Category", "InteractableItemData" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usability_MetaData[] = {
		{ "Category", "Item|Functionalities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Booleans that determine functionalities of the item ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Booleans that determine functionalities of the item *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadable_MetaData[] = {
		{ "Category", "Item|Functionalities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if the item is automatically read when interacted with\n" },
#endif
		{ "EditCondition", "Usability == EItemUsability::Inspectable" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the item is automatically read when interacted with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStorable_MetaData[] = {
		{ "Category", "Item|Functionalities" },
		{ "EditCondition", "Usability == EItemUsability::Inspectable || Usability == EItemUsability::AutoRead" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHistory_MetaData[] = {
		{ "Category", "Item|Functionalities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want the item to be stored in a history log of findings\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want the item to be stored in a history log of findings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsable_MetaData[] = {
		{ "Category", "Item|Functionalities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want the item to trigger a gameplay effect when used\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want the item to trigger a gameplay effect when used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStackable_MetaData[] = {
		{ "Category", "Item|Functionalities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want to have multiple of the same item in your inventory\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want to have multiple of the same item in your inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCraftable_MetaData[] = {
		{ "Category", "Item|Functionalities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if you want the item to be constructable from other items\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want the item to be constructable from other items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "InteractableItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Variables that determine the item's characteristics ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Variables that determine the item's characteristics *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "InteractableItemData" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractSound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Usability_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Usability;
	static void NewProp_bReadable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadable;
	static void NewProp_bStorable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStorable;
	static void NewProp_bHistory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHistory;
	static void NewProp_bUsable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsable;
	static void NewProp_bStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStackable;
	static void NewProp_bCraftable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCraftable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Mesh), Z_Construct_UClass_UStreamableRenderAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_InteractSound = { "InteractSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, InteractSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractSound_MetaData), NewProp_InteractSound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Usability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Usability = { "Usability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Usability), Z_Construct_UEnum_InteractableItems_EItemUsability, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usability_MetaData), NewProp_Usability_MetaData) }; // 1269168880
void Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bReadable_SetBit(void* Obj)
{
	((FInteractableItemData*)Obj)->bReadable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bReadable = { "bReadable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractableItemData), &Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bReadable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadable_MetaData), NewProp_bReadable_MetaData) };
void Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStorable_SetBit(void* Obj)
{
	((FInteractableItemData*)Obj)->bStorable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStorable = { "bStorable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractableItemData), &Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStorable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStorable_MetaData), NewProp_bStorable_MetaData) };
void Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bHistory_SetBit(void* Obj)
{
	((FInteractableItemData*)Obj)->bHistory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bHistory = { "bHistory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractableItemData), &Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bHistory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHistory_MetaData), NewProp_bHistory_MetaData) };
void Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bUsable_SetBit(void* Obj)
{
	((FInteractableItemData*)Obj)->bUsable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bUsable = { "bUsable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractableItemData), &Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bUsable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsable_MetaData), NewProp_bUsable_MetaData) };
void Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStackable_SetBit(void* Obj)
{
	((FInteractableItemData*)Obj)->bStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStackable = { "bStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractableItemData), &Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStackable_MetaData), NewProp_bStackable_MetaData) };
void Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bCraftable_SetBit(void* Obj)
{
	((FInteractableItemData*)Obj)->bCraftable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bCraftable = { "bCraftable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractableItemData), &Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bCraftable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCraftable_MetaData), NewProp_bCraftable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableItemData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_InteractSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Usability_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Usability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bReadable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStorable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bUsable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_bCraftable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
	nullptr,
	&NewStructOps,
	"InteractableItemData",
	Z_Construct_UScriptStruct_FInteractableItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemData_Statics::PropPointers),
	sizeof(FInteractableItemData),
	alignof(FInteractableItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractableItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractableItemData()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractableItemData.InnerSingleton, Z_Construct_UScriptStruct_FInteractableItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractableItemData.InnerSingleton;
}
// End ScriptStruct FInteractableItemData

// Begin Class UItemDatabase
void UItemDatabase::StaticRegisterNativesUItemDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDatabase);
UClass* Z_Construct_UClass_UItemDatabase_NoRegister()
{
	return UItemDatabase::StaticClass();
}
struct Z_Construct_UClass_UItemDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemTemplate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemDatabase" },
		{ "ModuleRelativePath", "Public/ItemTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDatabase_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDatabase, Item), Z_Construct_UScriptStruct_FInteractableItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 3028230135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDatabase_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDatabase_Statics::ClassParams = {
	&UItemDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDatabase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDatabase()
{
	if (!Z_Registration_Info_UClass_UItemDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDatabase.OuterSingleton, Z_Construct_UClass_UItemDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDatabase.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UItemDatabase>()
{
	return UItemDatabase::StaticClass();
}
UItemDatabase::UItemDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDatabase);
UItemDatabase::~UItemDatabase() {}
// End Class UItemDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemUsability_StaticEnum, TEXT("EItemUsability"), &Z_Registration_Info_UEnum_EItemUsability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1269168880U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractableItemData::StaticStruct, Z_Construct_UScriptStruct_FInteractableItemData_Statics::NewStructOps, TEXT("InteractableItemData"), &Z_Registration_Info_UScriptStruct_InteractableItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractableItemData), 3028230135U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDatabase, UItemDatabase::StaticClass, TEXT("UItemDatabase"), &Z_Registration_Info_UClass_UItemDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDatabase), 2023523053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_1081126798(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_ItemTemplate_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
