// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableItems_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InteractableItems;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InteractableItems()
	{
		if (!Z_Registration_Info_UPackage__Script_InteractableItems.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InteractableItems",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8E44C035,
				0x73196B84,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InteractableItems.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InteractableItems.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InteractableItems(Z_Construct_UPackage__Script_InteractableItems, TEXT("/Script/InteractableItems"), Z_Registration_Info_UPackage__Script_InteractableItems, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8E44C035, 0x73196B84));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
