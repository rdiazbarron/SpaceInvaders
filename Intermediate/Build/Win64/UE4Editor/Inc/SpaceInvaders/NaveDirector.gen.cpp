// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/NaveDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveDirector() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_ANaveDirector_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ANaveDirector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void ANaveDirector::StaticRegisterNativesANaveDirector()
	{
	}
	UClass* Z_Construct_UClass_ANaveDirector_NoRegister()
	{
		return ANaveDirector::StaticClass();
	}
	struct Z_Construct_UClass_ANaveDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveDirector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveDirector.h" },
		{ "ModuleRelativePath", "NaveDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveDirector_Statics::ClassParams = {
		&ANaveDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveDirector, 2938357185);
	template<> SPACEINVADERS_API UClass* StaticClass<ANaveDirector>()
	{
		return ANaveDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveDirector(Z_Construct_UClass_ANaveDirector, &ANaveDirector::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("ANaveDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
