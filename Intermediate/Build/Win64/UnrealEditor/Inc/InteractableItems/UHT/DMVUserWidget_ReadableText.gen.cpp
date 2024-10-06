// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/Widget/DMVUserWidget_ReadableText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVUserWidget_ReadableText() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_ReadableText();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_ReadableText_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVUserWidget_ReadableText
void UDMVUserWidget_ReadableText::StaticRegisterNativesUDMVUserWidget_ReadableText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVUserWidget_ReadableText);
UClass* Z_Construct_UClass_UDMVUserWidget_ReadableText_NoRegister()
{
	return UDMVUserWidget_ReadableText::StaticClass();
}
struct Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widget/DMVUserWidget_ReadableText.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget_ReadableText.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVUserWidget_ReadableText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDMVUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics::ClassParams = {
	&UDMVUserWidget_ReadableText::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVUserWidget_ReadableText()
{
	if (!Z_Registration_Info_UClass_UDMVUserWidget_ReadableText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVUserWidget_ReadableText.OuterSingleton, Z_Construct_UClass_UDMVUserWidget_ReadableText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVUserWidget_ReadableText.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVUserWidget_ReadableText>()
{
	return UDMVUserWidget_ReadableText::StaticClass();
}
UDMVUserWidget_ReadableText::UDMVUserWidget_ReadableText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVUserWidget_ReadableText);
UDMVUserWidget_ReadableText::~UDMVUserWidget_ReadableText() {}
// End Class UDMVUserWidget_ReadableText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ReadableText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVUserWidget_ReadableText, UDMVUserWidget_ReadableText::StaticClass, TEXT("UDMVUserWidget_ReadableText"), &Z_Registration_Info_UClass_UDMVUserWidget_ReadableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVUserWidget_ReadableText), 4162152853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ReadableText_h_2563254946(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ReadableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ReadableText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
