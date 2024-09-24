// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/Actor/DMVInspectItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVInspectItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_ADMVInspectItem();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_ADMVInspectItem_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class ADMVInspectItem Function SetInspectRotation
struct Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics
{
	struct DMVInspectItem_eventSetInspectRotation_Parms
	{
		FRotator NewRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVInspectItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInspectItem_eventSetInspectRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::NewProp_NewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMVInspectItem, nullptr, "SetInspectRotation", nullptr, nullptr, Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::DMVInspectItem_eventSetInspectRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::DMVInspectItem_eventSetInspectRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADMVInspectItem::execSetInspectRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInspectRotation(Z_Param_NewRotation);
	P_NATIVE_END;
}
// End Class ADMVInspectItem Function SetInspectRotation

// Begin Class ADMVInspectItem Function SetInspectScale
struct Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics
{
	struct DMVInspectItem_eventSetInspectScale_Parms
	{
		FVector NewScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/DMVInspectItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInspectItem_eventSetInspectScale_Parms, NewScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::NewProp_NewScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMVInspectItem, nullptr, "SetInspectScale", nullptr, nullptr, Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::DMVInspectItem_eventSetInspectScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::DMVInspectItem_eventSetInspectScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADMVInspectItem_SetInspectScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMVInspectItem_SetInspectScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADMVInspectItem::execSetInspectScale)
{
	P_GET_STRUCT(FVector,Z_Param_NewScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInspectScale(Z_Param_NewScale);
	P_NATIVE_END;
}
// End Class ADMVInspectItem Function SetInspectScale

// Begin Class ADMVInspectItem
void ADMVInspectItem::StaticRegisterNativesADMVInspectItem()
{
	UClass* Class = ADMVInspectItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInspectRotation", &ADMVInspectItem::execSetInspectRotation },
		{ "SetInspectScale", &ADMVInspectItem::execSetInspectScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVInspectItem);
UClass* Z_Construct_UClass_ADMVInspectItem_NoRegister()
{
	return ADMVInspectItem::StaticClass();
}
struct Z_Construct_UClass_ADMVInspectItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DMVInspectItem.h" },
		{ "ModuleRelativePath", "Public/Actor/DMVInspectItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "DMVInspectItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DMVInspectItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMVInspectItem_SetInspectRotation, "SetInspectRotation" }, // 3635357570
		{ &Z_Construct_UFunction_ADMVInspectItem_SetInspectScale, "SetInspectScale" }, // 1459136063
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVInspectItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVInspectItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVInspectItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMVInspectItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVInspectItem_Statics::NewProp_ItemMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVInspectItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADMVInspectItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVInspectItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADMVInspectItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister, (int32)VTABLE_OFFSET(ADMVInspectItem, IDMVInteractableItemsInterface), false },  // 767820097
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVInspectItem_Statics::ClassParams = {
	&ADMVInspectItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADMVInspectItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADMVInspectItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVInspectItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVInspectItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVInspectItem()
{
	if (!Z_Registration_Info_UClass_ADMVInspectItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVInspectItem.OuterSingleton, Z_Construct_UClass_ADMVInspectItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVInspectItem.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<ADMVInspectItem>()
{
	return ADMVInspectItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVInspectItem);
ADMVInspectItem::~ADMVInspectItem() {}
// End Class ADMVInspectItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVInspectItem, ADMVInspectItem::StaticClass, TEXT("ADMVInspectItem"), &Z_Registration_Info_UClass_ADMVInspectItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVInspectItem), 2036276130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_3484629368(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
