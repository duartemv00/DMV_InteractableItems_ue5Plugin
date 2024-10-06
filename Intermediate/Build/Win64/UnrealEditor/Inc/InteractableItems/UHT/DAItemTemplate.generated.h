// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/ItemTemplate/DAItemTemplate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTABLEITEMS_DAItemTemplate_generated_h
#error "DAItemTemplate.generated.h already included, missing '#pragma once' in DAItemTemplate.h"
#endif
#define INTERACTABLEITEMS_DAItemTemplate_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractableItemData_Statics; \
	INTERACTABLEITEMS_API static class UScriptStruct* StaticStruct();


template<> INTERACTABLEITEMS_API UScriptStruct* StaticStruct<struct FInteractableItemData>();

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAItemTemplate(); \
	friend struct Z_Construct_UClass_UDAItemTemplate_Statics; \
public: \
	DECLARE_CLASS(UDAItemTemplate, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(UDAItemTemplate)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAItemTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAItemTemplate(UDAItemTemplate&&); \
	UDAItemTemplate(const UDAItemTemplate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAItemTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAItemTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAItemTemplate) \
	NO_API virtual ~UDAItemTemplate();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_69_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_72_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class UDAItemTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Actor_ItemTemplate_DAItemTemplate_h


#define FOREACH_ENUM_EITEMUSABILITY(op) \
	op(EItemUsability::Inspectable) \
	op(EItemUsability::AutoRead) \
	op(EItemUsability::OnlyStorable) 

enum class EItemUsability : uint8;
template<> struct TIsUEnumClass<EItemUsability> { enum { Value = true }; };
template<> INTERACTABLEITEMS_API UEnum* StaticEnum<EItemUsability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
