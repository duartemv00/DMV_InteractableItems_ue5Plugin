// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/DMVWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWidgetControllerParams;
#ifdef INTERACTABLEITEMS_DMVWidgetController_generated_h
#error "DMVWidgetController.generated.h already included, missing '#pragma once' in DMVWidgetController.h"
#endif
#define INTERACTABLEITEMS_DMVWidgetController_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics; \
	INTERACTABLEITEMS_API static class UScriptStruct* StaticStruct();


template<> INTERACTABLEITEMS_API UScriptStruct* StaticStruct<struct FWidgetControllerParams>();

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetControllerParams);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMVWidgetController(); \
	friend struct Z_Construct_UClass_UDMVWidgetController_Statics; \
public: \
	DECLARE_CLASS(UDMVWidgetController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(UDMVWidgetController)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMVWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMVWidgetController(UDMVWidgetController&&); \
	UDMVWidgetController(const UDMVWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMVWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMVWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMVWidgetController) \
	NO_API virtual ~UDMVWidgetController();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_32_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class UDMVWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_WidgetController_DMVWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
