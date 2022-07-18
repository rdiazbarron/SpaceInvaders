// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/GeneratorKapsuleConcrete1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorKapsuleConcrete1() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsuleConcrete1_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsuleConcrete1();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AGeneratorKapsule1();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void AGeneratorKapsuleConcrete1::StaticRegisterNativesAGeneratorKapsuleConcrete1()
	{
	}
	UClass* Z_Construct_UClass_AGeneratorKapsuleConcrete1_NoRegister()
	{
		return AGeneratorKapsuleConcrete1::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneratorKapsule1,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GeneratorKapsuleConcrete1.h" },
		{ "ModuleRelativePath", "GeneratorKapsuleConcrete1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorKapsuleConcrete1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::ClassParams = {
		&AGeneratorKapsuleConcrete1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorKapsuleConcrete1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorKapsuleConcrete1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorKapsuleConcrete1, 642811515);
	template<> SPACEINVADERS_API UClass* StaticClass<AGeneratorKapsuleConcrete1>()
	{
		return AGeneratorKapsuleConcrete1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorKapsuleConcrete1(Z_Construct_UClass_AGeneratorKapsuleConcrete1, &AGeneratorKapsuleConcrete1::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AGeneratorKapsuleConcrete1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorKapsuleConcrete1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
