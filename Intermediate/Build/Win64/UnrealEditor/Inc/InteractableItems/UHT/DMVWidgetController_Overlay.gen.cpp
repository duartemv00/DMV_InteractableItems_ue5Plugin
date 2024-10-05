// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/WidgetController/DMVWidgetController_Overlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVWidgetController_Overlay() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController_Overlay();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController_Overlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVWidgetController_Overlay
void UDMVWidgetController_Overlay::StaticRegisterNativesUDMVWidgetController_Overlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVWidgetController_Overlay);
UClass* Z_Construct_UClass_UDMVWidgetController_Overlay_NoRegister()
{
	return UDMVWidgetController_Overlay::StaticClass();
}
struct Z_Construct_UClass_UDMVWidgetController_Overlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/DMVWidgetController_Overlay.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/DMVWidgetController_Overlay.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVWidgetController_Overlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDMVWidgetController_Overlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDMVWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVWidgetController_Overlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVWidgetController_Overlay_Statics::ClassParams = {
	&UDMVWidgetController_Overlay::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVWidgetController_Overlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVWidgetController_Overlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVWidgetController_Overlay()
{
	if (!Z_Registration_Info_UClass_UDMVWidgetController_Overlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVWidgetController_Overlay.OuterSingleton, Z_Construct_UClass_UDMVWidgetController_Overlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVWidgetController_Overlay.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVWidgetController_Overlay>()
{
	return UDMVWidgetController_Overlay::StaticClass();
}
UDMVWidgetController_Overlay::UDMVWidgetController_Overlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVWidgetController_Overlay);
UDMVWidgetController_Overlay::~UDMVWidgetController_Overlay() {}
// End Class UDMVWidgetController_Overlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_Overlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVWidgetController_Overlay, UDMVWidgetController_Overlay::StaticClass, TEXT("UDMVWidgetController_Overlay"), &Z_Registration_Info_UClass_UDMVWidgetController_Overlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVWidgetController_Overlay), 2020976897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_Overlay_h_2841700981(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_Overlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_Overlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
