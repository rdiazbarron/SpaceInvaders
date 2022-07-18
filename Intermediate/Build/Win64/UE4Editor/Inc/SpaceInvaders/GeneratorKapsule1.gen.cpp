// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/GeneratorKapsule1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorKapsule1() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsule1_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsule1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void AGeneratorKapsule1::StaticRegisterNativesAGeneratorKapsule1()
	{
	}
	UClass* Z_Construct_UClass_AGeneratorKapsule1_NoRegister()
	{
		return AGeneratorKapsule1::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorKapsule1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorKapsule1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorKapsule1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorKapsule1.h" },
		{ "ModuleRelativePath", "GeneratorKapsule1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorKapsule1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorKapsule1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorKapsule1_Statics::ClassParams = {
		&AGeneratorKapsule1::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorKapsule1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorKapsule1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorKapsule1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorKapsule1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorKapsule1, 247407308);
	template<> SPACEINVADERS_API UClass* StaticClass<AGeneratorKapsule1>()
	{
		return AGeneratorKapsule1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorKapsule1(Z_Construct_UClass_AGeneratorKapsule1, &AGeneratorKapsule1::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AGeneratorKapsule1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorKapsule1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
