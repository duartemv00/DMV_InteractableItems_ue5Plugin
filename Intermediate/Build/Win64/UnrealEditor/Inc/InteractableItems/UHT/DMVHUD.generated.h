// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/HUD/DMVHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTABLEITEMS_DMVHUD_generated_h
#error "DMVHUD.generated.h already included, missing '#pragma once' in DMVHUD.h"
#endif
#define INTERACTABLEITEMS_DMVHUD_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMVHUD(); \
	friend struct Z_Construct_UClass_ADMVHUD_Statics; \
public: \
	DECLARE_CLASS(ADMVHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(ADMVHUD)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADMVHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADMVHUD(ADMVHUD&&); \
	ADMVHUD(const ADMVHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMVHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMVHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADMVHUD) \
	NO_API virtual ~ADMVHUD();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_13_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class ADMVHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_UI_HUD_DMVHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
