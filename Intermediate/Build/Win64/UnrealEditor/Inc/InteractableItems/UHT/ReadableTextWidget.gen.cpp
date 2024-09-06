// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/ReadableTextWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadableTextWidget() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UReadableTextWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UReadableTextWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UReadableTextWidget
void UReadableTextWidget::StaticRegisterNativesUReadableTextWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadableTextWidget);
UClass* Z_Construct_UClass_UReadableTextWidget_NoRegister()
{
	return UReadableTextWidget::StaticClass();
}
struct Z_Construct_UClass_UReadableTextWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ReadableTextWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ReadableTextWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadableTextWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReadableTextWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDMVUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadableTextWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadableTextWidget_Statics::ClassParams = {
	&UReadableTextWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadableTextWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadableTextWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadableTextWidget()
{
	if (!Z_Registration_Info_UClass_UReadableTextWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadableTextWidget.OuterSingleton, Z_Construct_UClass_UReadableTextWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadableTextWidget.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UReadableTextWidget>()
{
	return UReadableTextWidget::StaticClass();
}
UReadableTextWidget::UReadableTextWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadableTextWidget);
UReadableTextWidget::~UReadableTextWidget() {}
// End Class UReadableTextWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_ReadableTextWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadableTextWidget, UReadableTextWidget::StaticClass, TEXT("UReadableTextWidget"), &Z_Registration_Info_UClass_UReadableTextWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadableTextWidget), 1656164656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_ReadableTextWidget_h_219112167(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_ReadableTextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_ReadableTextWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
