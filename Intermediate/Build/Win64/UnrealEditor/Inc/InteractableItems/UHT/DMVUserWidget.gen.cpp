// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/Widget/DMVUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVUserWidget Function SetWidgetController
struct Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics
{
	struct DMVUserWidget_eventSetWidgetController_Parms
	{
		UObject* InWidgetController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::DMVUserWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::DMVUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVUserWidget_SetWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVUserWidget_SetWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVUserWidget::execSetWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_InWidgetController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetController(Z_Param_InWidgetController);
	P_NATIVE_END;
}
// End Class UDMVUserWidget Function SetWidgetController

// Begin Class UDMVUserWidget Function WidgetControllerSet
static FName NAME_UDMVUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
void UDMVUserWidget::WidgetControllerSet()
{
	ProcessEvent(FindFunctionChecked(NAME_UDMVUserWidget_WidgetControllerSet),NULL);
}
struct Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDMVUserWidget Function WidgetControllerSet

// Begin Class UDMVUserWidget
void UDMVUserWidget::StaticRegisterNativesUDMVUserWidget()
{
	UClass* Class = UDMVUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetController", &UDMVUserWidget::execSetWidgetController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVUserWidget);
UClass* Z_Construct_UClass_UDMVUserWidget_NoRegister()
{
	return UDMVUserWidget::StaticClass();
}
struct Z_Construct_UClass_UDMVUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widget/DMVUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[] = {
		{ "Category", "DMVUserWidget" },
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMVUserWidget_SetWidgetController, "SetWidgetController" }, // 1552047903
		{ &Z_Construct_UFunction_UDMVUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 1436569328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDMVUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetController_MetaData), NewProp_WidgetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMVUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVUserWidget_Statics::NewProp_WidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDMVUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVUserWidget_Statics::ClassParams = {
	&UDMVUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDMVUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVUserWidget()
{
	if (!Z_Registration_Info_UClass_UDMVUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVUserWidget.OuterSingleton, Z_Construct_UClass_UDMVUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVUserWidget.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVUserWidget>()
{
	return UDMVUserWidget::StaticClass();
}
UDMVUserWidget::UDMVUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVUserWidget);
UDMVUserWidget::~UDMVUserWidget() {}
// End Class UDMVUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVUserWidget, UDMVUserWidget::StaticClass, TEXT("UDMVUserWidget"), &Z_Registration_Info_UClass_UDMVUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVUserWidget), 943968323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_h_1416462209(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
