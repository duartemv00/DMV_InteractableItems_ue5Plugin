// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/DMVInspectWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVInspectWidget() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInspectWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInspectWidget_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVInspectWidget
void UDMVInspectWidget::StaticRegisterNativesUDMVInspectWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVInspectWidget);
UClass* Z_Construct_UClass_UDMVInspectWidget_NoRegister()
{
	return UDMVInspectWidget::StaticClass();
}
struct Z_Construct_UClass_UDMVInspectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DMVInspectWidget.h" },
		{ "ModuleRelativePath", "Public/UI/DMVInspectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TItemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/DMVInspectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TItemDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/DMVInspectWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TItemDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVInspectWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDMVInspectWidget_Statics::NewProp_TItemName = { "TItemName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVInspectWidget, TItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TItemName_MetaData), NewProp_TItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDMVInspectWidget_Statics::NewProp_TItemDescription = { "TItemDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVInspectWidget, TItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TItemDescription_MetaData), NewProp_TItemDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMVInspectWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInspectWidget_Statics::NewProp_TItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVInspectWidget_Statics::NewProp_TItemDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInspectWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDMVInspectWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDMVUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInspectWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVInspectWidget_Statics::ClassParams = {
	&UDMVInspectWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDMVInspectWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInspectWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInspectWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVInspectWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVInspectWidget()
{
	if (!Z_Registration_Info_UClass_UDMVInspectWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVInspectWidget.OuterSingleton, Z_Construct_UClass_UDMVInspectWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVInspectWidget.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVInspectWidget>()
{
	return UDMVInspectWidget::StaticClass();
}
UDMVInspectWidget::UDMVInspectWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVInspectWidget);
UDMVInspectWidget::~UDMVInspectWidget() {}
// End Class UDMVInspectWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVInspectWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVInspectWidget, UDMVInspectWidget::StaticClass, TEXT("UDMVInspectWidget"), &Z_Registration_Info_UClass_UDMVInspectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVInspectWidget), 2233732096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVInspectWidget_h_2245084072(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVInspectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVInspectWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
