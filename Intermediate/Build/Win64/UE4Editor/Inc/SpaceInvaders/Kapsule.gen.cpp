// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/Kapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKapsule() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsule_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsule();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UCapsuleMovementComponent_NoRegister();
// End Cross Module References
	void AKapsule::StaticRegisterNativesAKapsule()
	{
	}
	UClass* Z_Construct_UClass_AKapsule_NoRegister()
	{
		return AKapsule::StaticClass();
	}
	struct Z_Construct_UClass_AKapsule_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoCapsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TipoCapsula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoEfecto_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TipoEfecto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoDuracion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TipoDuracion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KapsuleMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KapsuleMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KapsuleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KapsuleMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Kapsule.h" },
		{ "ModuleRelativePath", "Kapsule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::NewProp_Nombre_MetaData[] = {
		{ "Category", "Patron Factory" },
		{ "ModuleRelativePath", "Kapsule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AKapsule_Statics::NewProp_Nombre = { "Nombre", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKapsule, Nombre), METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::NewProp_Nombre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::NewProp_Nombre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::NewProp_TipoCapsula_MetaData[] = {
		{ "Category", "Patron Factory" },
		{ "ModuleRelativePath", "Kapsule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AKapsule_Statics::NewProp_TipoCapsula = { "TipoCapsula", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKapsule, TipoCapsula), METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::NewProp_TipoCapsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::NewProp_TipoCapsula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::NewProp_TipoEfecto_MetaData[] = {
		{ "Category", "Patron Factory" },
		{ "ModuleRelativePath", "Kapsule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AKapsule_Statics::NewProp_TipoEfecto = { "TipoEfecto", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKapsule, TipoEfecto), METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::NewProp_TipoEfecto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::NewProp_TipoEfecto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::NewProp_TipoDuracion_MetaData[] = {
		{ "Category", "Patron Factory" },
		{ "Comment", "//Egregar salud, agregar arma\n" },
		{ "ModuleRelativePath", "Kapsule.h" },
		{ "ToolTip", "Egregar salud, agregar arma" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AKapsule_Statics::NewProp_TipoDuracion = { "TipoDuracion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKapsule, TipoDuracion), METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::NewProp_TipoDuracion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::NewProp_TipoDuracion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMeshComponent_MetaData[] = {
		{ "Category", "Patron Factory" },
		{ "Comment", "//A partir de su uso hasta que pierda la vida el jugador, por 10 segundos\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Kapsule.h" },
		{ "ToolTip", "A partir de su uso hasta que pierda la vida el jugador, por 10 segundos" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMeshComponent = { "KapsuleMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKapsule, KapsuleMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Kapsule.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMovement = { "KapsuleMovement", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKapsule, KapsuleMovement), Z_Construct_UClass_UCapsuleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKapsule_Statics::NewProp_Nombre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKapsule_Statics::NewProp_TipoCapsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKapsule_Statics::NewProp_TipoEfecto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKapsule_Statics::NewProp_TipoDuracion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKapsule_Statics::NewProp_KapsuleMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKapsule_Statics::ClassParams = {
		&AKapsule::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKapsule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKapsule, 2905741870);
	template<> SPACEINVADERS_API UClass* StaticClass<AKapsule>()
	{
		return AKapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKapsule(Z_Construct_UClass_AKapsule, &AKapsule::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AKapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
