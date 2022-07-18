// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/T_FreakyAllen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_FreakyAllen() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_FreakyAllen_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_FreakyAllen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_ClockTower_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UT_Subscriber_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UT_Changes_NoRegister();
// End Cross Module References
	void AT_FreakyAllen::StaticRegisterNativesAT_FreakyAllen()
	{
	}
	UClass* Z_Construct_UClass_AT_FreakyAllen_NoRegister()
	{
		return AT_FreakyAllen::StaticClass();
	}
	struct Z_Construct_UClass_AT_FreakyAllen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClockTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT_FreakyAllen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT_FreakyAllen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "T_FreakyAllen.h" },
		{ "ModuleRelativePath", "T_FreakyAllen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT_FreakyAllen_Statics::NewProp_ClockTower_MetaData[] = {
		{ "Comment", "//The Clock Tower of this Subscriber\n" },
		{ "ModuleRelativePath", "T_FreakyAllen.h" },
		{ "ToolTip", "The Clock Tower of this Subscriber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT_FreakyAllen_Statics::NewProp_ClockTower = { "ClockTower", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT_FreakyAllen, ClockTower), Z_Construct_UClass_AT_ClockTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT_FreakyAllen_Statics::NewProp_ClockTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT_FreakyAllen_Statics::NewProp_ClockTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT_FreakyAllen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_FreakyAllen_Statics::NewProp_ClockTower,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AT_FreakyAllen_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UT_Subscriber_NoRegister, (int32)VTABLE_OFFSET(AT_FreakyAllen, IT_Subscriber), false },
			{ Z_Construct_UClass_UT_Changes_NoRegister, (int32)VTABLE_OFFSET(AT_FreakyAllen, IT_Changes), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT_FreakyAllen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_FreakyAllen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT_FreakyAllen_Statics::ClassParams = {
		&AT_FreakyAllen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT_FreakyAllen_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT_FreakyAllen_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT_FreakyAllen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT_FreakyAllen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT_FreakyAllen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT_FreakyAllen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT_FreakyAllen, 3264899236);
	template<> SPACEINVADERS_API UClass* StaticClass<AT_FreakyAllen>()
	{
		return AT_FreakyAllen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT_FreakyAllen(Z_Construct_UClass_AT_FreakyAllen, &AT_FreakyAllen::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AT_FreakyAllen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT_FreakyAllen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
