// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableItems/Public/Interface/DMVInteractableItemsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVInteractableItemsInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInteractableItemsInterface();
INTERACTABLEITEMS_API UClass* Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractableItems();
// End Cross Module References

// Begin Interface UDMVInteractableItemsInterface Function Inspect
struct DMVInteractableItemsInterface_eventInspect_Parms
{
	ACharacter* InteractingCharacter;
	UStaticMesh* InspectedItem;
	FText GivenItemName;
	FText GivenItemDescription;
};
void IDMVInteractableItemsInterface::Inspect(ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FText& GivenItemName, FText& GivenItemDescription)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Inspect instead.");
}
static FName NAME_UDMVInteractableItemsInterface_Inspect = FName(TEXT("Inspect"));
void IDMVInteractableItemsInterface::Execute_Inspect(UObject* O, ACharacter* InteractingCharacter, UStaticMesh* InspectedItem, FText& GivenItemName, FText& GivenItemDescription)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDMVInteractableItemsInterface::StaticClass()));
	DMVInteractableItemsInterface_eventInspect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDMVInteractableItemsInterface_Inspect);
	if (Func)
	{
		Parms.InteractingCharacter=InteractingCharacter;
		Parms.InspectedItem=InspectedItem;
		Parms.GivenItemName=GivenItemName;
		Parms.GivenItemDescription=GivenItemDescription;
		O->ProcessEvent(Func, &Parms);
		GivenItemName=Parms.GivenItemName;
		GivenItemDescription=Parms.GivenItemDescription;
	}
	else if (auto I = (IDMVInteractableItemsInterface*)(O->GetNativeInterfaceAddress(UDMVInteractableItemsInterface::StaticClass())))
	{
		I->Inspect_Implementation(InteractingCharacter,InspectedItem,GivenItemName,GivenItemDescription);
	}
}
struct Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DMVInteractableItemsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectedItem;
	static const UECodeGen_Private::FTextPropertyParams NewProp_GivenItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_GivenItemDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventInspect_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_InspectedItem = { "InspectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventInspect_Parms, InspectedItem), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_GivenItemName = { "GivenItemName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventInspect_Parms, GivenItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_GivenItemDescription = { "GivenItemDescription", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventInspect_Parms, GivenItemDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_InteractingCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_InspectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_GivenItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::NewProp_GivenItemDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVInteractableItemsInterface, nullptr, "Inspect", nullptr, nullptr, Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::PropPointers), sizeof(DMVInteractableItemsInterface_eventInspect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::Function_MetaDataParams) };
static_assert(sizeof(DMVInteractableItemsInterface_eventInspect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDMVInteractableItemsInterface::execInspect)
{
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_GET_OBJECT(UStaticMesh,Z_Param_InspectedItem);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_GivenItemName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_GivenItemDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Inspect_Implementation(Z_Param_InteractingCharacter,Z_Param_InspectedItem,Z_Param_Out_GivenItemName,Z_Param_Out_GivenItemDescription);
	P_NATIVE_END;
}
// End Interface UDMVInteractableItemsInterface Function Inspect

// Begin Interface UDMVInteractableItemsInterface Function OnInteract
struct DMVInteractableItemsInterface_eventOnInteract_Parms
{
	ACharacter* InteractingCharacter;
};
void IDMVInteractableItemsInterface::OnInteract(ACharacter* InteractingCharacter)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
}
static FName NAME_UDMVInteractableItemsInterface_OnInteract = FName(TEXT("OnInteract"));
void IDMVInteractableItemsInterface::Execute_OnInteract(UObject* O, ACharacter* InteractingCharacter)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDMVInteractableItemsInterface::StaticClass()));
	DMVInteractableItemsInterface_eventOnInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDMVInteractableItemsInterface_OnInteract);
	if (Func)
	{
		Parms.InteractingCharacter=InteractingCharacter;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDMVInteractableItemsInterface*)(O->GetNativeInterfaceAddress(UDMVInteractableItemsInterface::StaticClass())))
	{
		I->OnInteract_Implementation(InteractingCharacter);
	}
}
struct Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DMVInteractableItemsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventOnInteract_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::NewProp_InteractingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVInteractableItemsInterface, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::PropPointers), sizeof(DMVInteractableItemsInterface_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(DMVInteractableItemsInterface_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDMVInteractableItemsInterface::execOnInteract)
{
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteract_Implementation(Z_Param_InteractingCharacter);
	P_NATIVE_END;
}
// End Interface UDMVInteractableItemsInterface Function OnInteract

// Begin Interface UDMVInteractableItemsInterface Function Read
struct DMVInteractableItemsInterface_eventRead_Parms
{
	ACharacter* InteractingCharacter;
	FText ReadableText;
};
void IDMVInteractableItemsInterface::Read(ACharacter* InteractingCharacter, FText& ReadableText)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Read instead.");
}
static FName NAME_UDMVInteractableItemsInterface_Read = FName(TEXT("Read"));
void IDMVInteractableItemsInterface::Execute_Read(UObject* O, ACharacter* InteractingCharacter, FText& ReadableText)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDMVInteractableItemsInterface::StaticClass()));
	DMVInteractableItemsInterface_eventRead_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDMVInteractableItemsInterface_Read);
	if (Func)
	{
		Parms.InteractingCharacter=InteractingCharacter;
		Parms.ReadableText=ReadableText;
		O->ProcessEvent(Func, &Parms);
		ReadableText=Parms.ReadableText;
	}
	else if (auto I = (IDMVInteractableItemsInterface*)(O->GetNativeInterfaceAddress(UDMVInteractableItemsInterface::StaticClass())))
	{
		I->Read_Implementation(InteractingCharacter,ReadableText);
	}
}
struct Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DMVInteractableItemsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReadableText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventRead_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::NewProp_ReadableText = { "ReadableText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVInteractableItemsInterface_eventRead_Parms, ReadableText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::NewProp_InteractingCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::NewProp_ReadableText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVInteractableItemsInterface, nullptr, "Read", nullptr, nullptr, Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::PropPointers), sizeof(DMVInteractableItemsInterface_eventRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::Function_MetaDataParams) };
static_assert(sizeof(DMVInteractableItemsInterface_eventRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVInteractableItemsInterface_Read()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVInteractableItemsInterface_Read_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDMVInteractableItemsInterface::execRead)
{
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ReadableText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Read_Implementation(Z_Param_InteractingCharacter,Z_Param_Out_ReadableText);
	P_NATIVE_END;
}
// End Interface UDMVInteractableItemsInterface Function Read

// Begin Interface UDMVInteractableItemsInterface
void UDMVInteractableItemsInterface::StaticRegisterNativesUDMVInteractableItemsInterface()
{
	UClass* Class = UDMVInteractableItemsInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Inspect", &IDMVInteractableItemsInterface::execInspect },
		{ "OnInteract", &IDMVInteractableItemsInterface::execOnInteract },
		{ "Read", &IDMVInteractableItemsInterface::execRead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVInteractableItemsInterface);
UClass* Z_Construct_UClass_UDMVInteractableItemsInterface_NoRegister()
{
	return UDMVInteractableItemsInterface::StaticClass();
}
struct Z_Construct_UClass_UDMVInteractableItemsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DMVInteractableItemsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMVInteractableItemsInterface_Inspect, "Inspect" }, // 1930368209
		{ &Z_Construct_UFunction_UDMVInteractableItemsInterface_OnInteract, "OnInteract" }, // 2093754898
		{ &Z_Construct_UFunction_UDMVInteractableItemsInterface_Read, "Read" }, // 303745003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDMVInteractableItemsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDMVInteractableItemsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractableItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInteractableItemsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVInteractableItemsInterface_Statics::ClassParams = {
	&UDMVInteractableItemsInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVInteractableItemsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVInteractableItemsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVInteractableItemsInterface()
{
	if (!Z_Registration_Info_UClass_UDMVInteractableItemsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVInteractableItemsInterface.OuterSingleton, Z_Construct_UClass_UDMVInteractableItemsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVInteractableItemsInterface.OuterSingleton;
}
template<> INTERACTABLEITEMS_API UClass* StaticClass<UDMVInteractableItemsInterface>()
{
	return UDMVInteractableItemsInterface::StaticClass();
}
UDMVInteractableItemsInterface::UDMVInteractableItemsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVInteractableItemsInterface);
UDMVInteractableItemsInterface::~UDMVInteractableItemsInterface() {}
// End Interface UDMVInteractableItemsInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVInteractableItemsInterface, UDMVInteractableItemsInterface::StaticClass, TEXT("UDMVInteractableItemsInterface"), &Z_Registration_Info_UClass_UDMVInteractableItemsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVInteractableItemsInterface), 767820097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_452557100(TEXT("/Script/InteractableItems"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_InteractableItems_Source_InteractableItems_Public_Interface_DMVInteractableItemsInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
