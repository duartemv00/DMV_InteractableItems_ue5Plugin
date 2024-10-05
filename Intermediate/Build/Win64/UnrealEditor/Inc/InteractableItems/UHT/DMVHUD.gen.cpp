// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/UI/HUD/DMVHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_ADMVHUD();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_ADMVHUD_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Class ADMVHUD
void ADMVHUD::StaticRegisterNativesADMVHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVHUD);
UClass* Z_Construct_UClass_ADMVHUD_NoRegister()
{
	return ADMVHUD::StaticClass();
}
struct Z_Construct_UClass_ADMVHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/DMVHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InspectWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "DMVHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InspectWidgetClass_MetaData[] = {
		{ "Category", "DMVHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InspectWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, OverlayWidget), Z_Construct_UClass_UDMVUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidget_MetaData), NewProp_OverlayWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_InspectWidget = { "InspectWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, InspectWidget), Z_Construct_UClass_UDMVUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InspectWidget_MetaData), NewProp_InspectWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMVUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetClass_MetaData), NewProp_OverlayWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_InspectWidgetClass = { "InspectWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, InspectWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMVUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InspectWidgetClass_MetaData), NewProp_InspectWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMVHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_InspectWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_InspectWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADMVHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVHUD_Statics::ClassParams = {
	&ADMVHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADMVHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADMVHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVHUD()
{
	if (!Z_Registration_Info_UClass_ADMVHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVHUD.OuterSingleton, Z_Construct_UClass_ADMVHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVHUD.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<ADMVHUD>()
{
	return ADMVHUD::StaticClass();
}
ADMVHUD::ADMVHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVHUD);
ADMVHUD::~ADMVHUD() {}
// End Class ADMVHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVHUD, ADMVHUD::StaticClass, TEXT("ADMVHUD"), &Z_Registration_Info_UClass_ADMVHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVHUD), 1782603872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_1388675674(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
