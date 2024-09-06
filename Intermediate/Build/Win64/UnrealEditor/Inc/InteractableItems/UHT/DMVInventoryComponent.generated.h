// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/DMVInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItemData;
#ifdef INTERACTABLEITEMS_DMVInventoryComponent_generated_h
#error "DMVInventoryComponent.generated.h already included, missing '#pragma once' in DMVInventoryComponent.h"
#endif
#define INTERACTABLEITEMS_DMVInventoryComponent_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddItemToItemsHistory); \
	DECLARE_FUNCTION(execRemoveItemFromStoredItems); \
	DECLARE_FUNCTION(execAddItemToStoredItems);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMVInventoryComponent(); \
	friend struct Z_Construct_UClass_UDMVInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UDMVInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(UDMVInventoryComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDMVInventoryComponent*>(this); }


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMVInventoryComponent(UDMVInventoryComponent&&); \
	UDMVInventoryComponent(const UDMVInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMVInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMVInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMVInventoryComponent) \
	NO_API virtual ~UDMVInventoryComponent();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_12_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class UDMVInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Component_DMVInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
