// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/Widget/DMVUserWidget_ItemInspect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVUserWidget_ItemInspect() {}

// Begin Cross Module References
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_ItemInspect();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class UDMVUserWidget_ItemInspect
void UDMVUserWidget_ItemInspect::StaticRegisterNativesUDMVUserWidget_ItemInspect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVUserWidget_ItemInspect);
UClass* Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister()
{
	return UDMVUserWidget_ItemInspect::StaticClass();
}
struct Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widget/DMVUserWidget_ItemInspect.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget_ItemInspect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TItemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget_ItemInspect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TItemDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/DMVUserWidget_ItemInspect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TItemDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVUserWidget_ItemInspect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::NewProp_TItemName = { "TItemName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVUserWidget_ItemInspect, TItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TItemName_MetaData), NewProp_TItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::NewProp_TItemDescription = { "TItemDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVUserWidget_ItemInspect, TItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TItemDescription_MetaData), NewProp_TItemDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::NewProp_TItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::NewProp_TItemDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDMVUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::ClassParams = {
	&UDMVUserWidget_ItemInspect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVUserWidget_ItemInspect()
{
	if (!Z_Registration_Info_UClass_UDMVUserWidget_ItemInspect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVUserWidget_ItemInspect.OuterSingleton, Z_Construct_UClass_UDMVUserWidget_ItemInspect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVUserWidget_ItemInspect.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVUserWidget_ItemInspect>()
{
	return UDMVUserWidget_ItemInspect::StaticClass();
}
UDMVUserWidget_ItemInspect::UDMVUserWidget_ItemInspect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVUserWidget_ItemInspect);
UDMVUserWidget_ItemInspect::~UDMVUserWidget_ItemInspect() {}
// End Class UDMVUserWidget_ItemInspect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ItemInspect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVUserWidget_ItemInspect, UDMVUserWidget_ItemInspect::StaticClass, TEXT("UDMVUserWidget_ItemInspect"), &Z_Registration_Info_UClass_UDMVUserWidget_ItemInspect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVUserWidget_ItemInspect), 180661717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ItemInspect_h_994677492(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ItemInspect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_Widget_DMVUserWidget_ItemInspect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
