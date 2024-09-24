// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/DMVInteractableItemsInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UStaticMesh;
#ifdef INTERACTABLEITEMS_DMVInteractableItemsInterface_generated_h
#error "DMVInteractableItemsInterface.generated.h already included, missing '#pragma once' in DMVInteractableItemsInterface.h"
#endif
#define INTERACTABLEITEMS_DMVInteractableItemsInterface_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Read_Implementation(ACharacter* InteractingCharacter, FText& ReadableText) {}; \
	virtual void Inspect_Implementation(ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FText& GivenItemName, FText& GivenItemDescription) {}; \
	virtual void OnInteract_Implementation(ACharacter* InteractingCharacter) {}; \
	DECLARE_FUNCTION(execRead); \
	DECLARE_FUNCTION(execInspect); \
	DECLARE_FUNCTION(execOnInteract);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMVInteractableItemsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMVInteractableItemsInterface(UDMVInteractableItemsInterface&&); \
	UDMVInteractableItemsInterface(const UDMVInteractableItemsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMVInteractableItemsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMVInteractableItemsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMVInteractableItemsInterface) \
	NO_API virtual ~UDMVInteractableItemsInterface();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMVInteractableItemsInterface(); \
	friend struct Z_Construct_UClass_UDMVInteractableItemsInterface_Statics; \
public: \
	DECLARE_CLASS(UDMVInteractableItemsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractableItems"), NO_API) \
	DECLARE_SERIALIZER(UDMVInteractableItemsInterface)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMVInteractableItemsInterface() {} \
public: \
	typedef UDMVInteractableItemsInterface UClassType; \
	typedef IDMVInteractableItemsInterface ThisClass; \
	static void Execute_Inspect(UObject* O, ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FText& GivenItemName, FText& GivenItemDescription); \
	static void Execute_OnInteract(UObject* O, ACharacter* InteractingCharacter); \
	static void Execute_Read(UObject* O, ACharacter* InteractingCharacter, FText& ReadableText); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_10_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTABLEITEMS_API UClass* StaticClass<class UDMVInteractableItemsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
