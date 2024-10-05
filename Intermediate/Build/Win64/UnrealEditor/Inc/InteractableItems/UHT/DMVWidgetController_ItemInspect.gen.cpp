// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/WidgetController/DMVWidgetController_ItemInspect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVWidgetController_ItemInspect() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController_ItemInspect();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController_ItemInspect_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVWidgetController_ItemInspect
void UDMVWidgetController_ItemInspect::StaticRegisterNativesUDMVWidgetController_ItemInspect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVWidgetController_ItemInspect);
UClass* Z_Construct_UClass_UDMVWidgetController_ItemInspect_NoRegister()
{
	return UDMVWidgetController_ItemInspect::StaticClass();
}
struct Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/DMVWidgetController_ItemInspect.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/DMVWidgetController_ItemInspect.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVWidgetController_ItemInspect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDMVWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics::ClassParams = {
	&UDMVWidgetController_ItemInspect::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVWidgetController_ItemInspect()
{
	if (!Z_Registration_Info_UClass_UDMVWidgetController_ItemInspect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVWidgetController_ItemInspect.OuterSingleton, Z_Construct_UClass_UDMVWidgetController_ItemInspect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVWidgetController_ItemInspect.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVWidgetController_ItemInspect>()
{
	return UDMVWidgetController_ItemInspect::StaticClass();
}
UDMVWidgetController_ItemInspect::UDMVWidgetController_ItemInspect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVWidgetController_ItemInspect);
UDMVWidgetController_ItemInspect::~UDMVWidgetController_ItemInspect() {}
// End Class UDMVWidgetController_ItemInspect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_ItemInspect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVWidgetController_ItemInspect, UDMVWidgetController_ItemInspect::StaticClass, TEXT("UDMVWidgetController_ItemInspect"), &Z_Registration_Info_UClass_UDMVWidgetController_ItemInspect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVWidgetController_ItemInspect), 568717167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_ItemInspect_h_3906978816(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_ItemInspect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_ItemInspect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
