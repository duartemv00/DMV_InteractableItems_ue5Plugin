// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/DMVWorldItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class APlayerController;
#ifdef INTERACTABLEITEMS_DMVWorldItem_generated_h
#error "DMVWorldItem.generated.h already included, missing '#pragma once' in DMVWorldItem.h"
#endif
#define INTERACTABLEITEMS_DMVWorldItem_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteractItem); \
	DECLARE_FUNCTION(execDirectTextRead); \
	DECLARE_FUNCTION(execSetupItem);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMVWorldItem(); \
	friend struct Z_Construct_UClass_ADMVWorldItem_Statics; \
public: \
	DECLARE_CLASS(ADMVWorldItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(ADMVWorldItem) \
	virtual UObject* _getUObject() const override { return const_cast<ADMVWorldItem*>(this); }


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADMVWorldItem(ADMVWorldItem&&); \
	ADMVWorldItem(const ADMVWorldItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMVWorldItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMVWorldItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMVWorldItem) \
	NO_API virtual ~ADMVWorldItem();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_11_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class ADMVWorldItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVWorldItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
