// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/GeneratorKapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorKapsule() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsule_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsule();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void AGeneratorKapsule::StaticRegisterNativesAGeneratorKapsule()
	{
	}
	UClass* Z_Construct_UClass_AGeneratorKapsule_NoRegister()
	{
		return AGeneratorKapsule::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorKapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorKapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorKapsule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GeneratorKapsule.h" },
		{ "ModuleRelativePath", "GeneratorKapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorKapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorKapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorKapsule_Statics::ClassParams = {
		&AGeneratorKapsule::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorKapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorKapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorKapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorKapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorKapsule, 3016264647);
	template<> SPACEINVADERS_API UClass* StaticClass<AGeneratorKapsule>()
	{
		return AGeneratorKapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorKapsule(Z_Construct_UClass_AGeneratorKapsule, &AGeneratorKapsule::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AGeneratorKapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorKapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
