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
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController_ItemInspect_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVWidgetController_Overlay_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BEGIN - Create Overlay Widget Implementation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BEGIN - Create Overlay Widget Implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInspectWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BEGIN - Create Inspect Widget Implementation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BEGIN - Create Inspect Widget Implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "DMVHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInspectWidgetClass_MetaData[] = {
		{ "Category", "DMVHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "DMVHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInspectWidgetControllerClass_MetaData[] = {
		{ "Category", "DMVHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInspectWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/DMVHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInspectWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemInspectWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemInspectWidgetControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayWidgetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInspectWidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, OverlayWidget), Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidget_MetaData), NewProp_OverlayWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidget = { "ItemInspectWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, ItemInspectWidget), Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInspectWidget_MetaData), NewProp_ItemInspectWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetClass_MetaData), NewProp_OverlayWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidgetClass = { "ItemInspectWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, ItemInspectWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMVUserWidget_ItemInspect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInspectWidgetClass_MetaData), NewProp_ItemInspectWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMVWidgetController_Overlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetControllerClass_MetaData), NewProp_OverlayWidgetControllerClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidgetControllerClass = { "ItemInspectWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, ItemInspectWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMVWidgetController_ItemInspect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInspectWidgetControllerClass_MetaData), NewProp_ItemInspectWidgetControllerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, OverlayWidgetController), Z_Construct_UClass_UDMVWidgetController_Overlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetController_MetaData), NewProp_OverlayWidgetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidgetController = { "ItemInspectWidgetController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVHUD, ItemInspectWidgetController), Z_Construct_UClass_UDMVWidgetController_ItemInspect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInspectWidgetController_MetaData), NewProp_ItemInspectWidgetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMVHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidgetControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_OverlayWidgetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVHUD_Statics::NewProp_ItemInspectWidgetController,
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
		{ Z_Construct_UClass_ADMVHUD, ADMVHUD::StaticClass, TEXT("ADMVHUD"), &Z_Registration_Info_UClass_ADMVHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVHUD), 1265371398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_731476458(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
