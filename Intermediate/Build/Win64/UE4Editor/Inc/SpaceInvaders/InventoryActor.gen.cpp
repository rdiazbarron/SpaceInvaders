// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/InventoryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActor() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AInventoryActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	SPACEINVADERS_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
// End Cross Module References
	void AInventoryActor::StaticRegisterNativesAInventoryActor()
	{
	}
	UClass* Z_Construct_UClass_AInventoryActor_NoRegister()
	{
		return AInventoryActor::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nombre_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nombre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "InventoryActor.h" },
		{ "ModuleRelativePath", "InventoryActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_Nombre_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Datos" },
		{ "ModuleRelativePath", "InventoryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_Nombre = { "Nombre", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryActor, Nombre), METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_Nombre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_Nombre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_CapsuleMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_CapsuleMovement = { "CapsuleMovement", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryActor, CapsuleMovement), Z_Construct_UClass_URandomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_CapsuleMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_CapsuleMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_Nombre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_CapsuleMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryActor_Statics::ClassParams = {
		&AInventoryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInventoryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryActor, 1550493804);
	template<> SPACEINVADERS_API UClass* StaticClass<AInventoryActor>()
	{
		return AInventoryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryActor(Z_Construct_UClass_AInventoryActor, &AInventoryActor::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AInventoryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
