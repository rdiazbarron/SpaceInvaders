// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/T_Changes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Changes() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_UT_Changes_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UT_Changes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void UT_Changes::StaticRegisterNativesUT_Changes()
	{
	}
	UClass* Z_Construct_UClass_UT_Changes_NoRegister()
	{
		return UT_Changes::StaticClass();
	}
	struct Z_Construct_UClass_UT_Changes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT_Changes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT_Changes_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "T_Changes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT_Changes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IT_Changes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT_Changes_Statics::ClassParams = {
		&UT_Changes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UT_Changes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT_Changes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT_Changes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT_Changes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT_Changes, 3595189222);
	template<> SPACEINVADERS_API UClass* StaticClass<UT_Changes>()
	{
		return UT_Changes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT_Changes(Z_Construct_UClass_UT_Changes, &UT_Changes::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("UT_Changes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT_Changes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
