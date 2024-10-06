// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/DMVInspectItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTABLEITEMS_DMVInspectItem_generated_h
#error "DMVInspectItem.generated.h already included, missing '#pragma once' in DMVInspectItem.h"
#endif
#define INTERACTABLEITEMS_DMVInspectItem_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInspectScale); \
	DECLARE_FUNCTION(execSetInspectRotation);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMVInspectItem(); \
	friend struct Z_Construct_UClass_ADMVInspectItem_Statics; \
public: \
	DECLARE_CLASS(ADMVInspectItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(ADMVInspectItem) \
	virtual UObject* _getUObject() const override { return const_cast<ADMVInspectItem*>(this); }


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADMVInspectItem(ADMVInspectItem&&); \
	ADMVInspectItem(const ADMVInspectItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMVInspectItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMVInspectItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMVInspectItem) \
	NO_API virtual ~ADMVInspectItem();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_14_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class ADMVInspectItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_DMVInspectItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
