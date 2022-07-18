// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/T_Subscriber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Subscriber() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_UT_Subscriber_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UT_Subscriber();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void UT_Subscriber::StaticRegisterNativesUT_Subscriber()
	{
	}
	UClass* Z_Construct_UClass_UT_Subscriber_NoRegister()
	{
		return UT_Subscriber::StaticClass();
	}
	struct Z_Construct_UClass_UT_Subscriber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT_Subscriber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT_Subscriber_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "T_Subscriber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT_Subscriber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IT_Subscriber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT_Subscriber_Statics::ClassParams = {
		&UT_Subscriber::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT_Subscriber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT_Subscriber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT_Subscriber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT_Subscriber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT_Subscriber, 1867411813);
	template<> SPACEINVADERS_API UClass* StaticClass<UT_Subscriber>()
	{
		return UT_Subscriber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT_Subscriber(Z_Construct_UClass_UT_Subscriber, &UT_Subscriber::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("UT_Subscriber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT_Subscriber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
