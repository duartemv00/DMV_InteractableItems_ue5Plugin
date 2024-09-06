// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/DMVUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVUserWidget() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVUserWidget
void UDMVUserWidget::StaticRegisterNativesUDMVUserWidget()
{
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
		{ "IncludePath", "UI/DMVUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/DMVUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVUserWidget, UDMVUserWidget::StaticClass, TEXT("UDMVUserWidget"), &Z_Registration_Info_UClass_UDMVUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVUserWidget), 3441119323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVUserWidget_h_3617640359(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_DMVUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
