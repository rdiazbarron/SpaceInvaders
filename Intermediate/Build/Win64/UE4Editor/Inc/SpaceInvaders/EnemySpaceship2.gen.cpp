// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/EnemySpaceship2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpaceship2() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AEnemySpaceship2_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AEnemySpaceship2();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ASpaceship();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SPACEINVADERS_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AEnemySpaceship2::StaticRegisterNativesAEnemySpaceship2()
	{
	}
	UClass* Z_Construct_UClass_AEnemySpaceship2_NoRegister()
	{
		return AEnemySpaceship2::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpaceship2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipExplosionEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipExplosionEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RandMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpaceship2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpaceship,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemySpaceship2.h" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ShipExplosionEnemy_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ShipExplosionEnemy = { "ShipExplosionEnemy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpaceship2, ShipExplosionEnemy), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ShipExplosionEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ShipExplosionEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpaceship2, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpaceship2, FireRate), METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_RandMove_MetaData[] = {
		{ "Comment", "//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_RandMove = { "RandMove", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpaceship2, RandMove), Z_Construct_UClass_URandomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_RandMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_RandMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "EnemySpaceship2" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"Component\")\n\x09\x09TSubclassOf<class AProjectile> Projectile_BP;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Component\")\n               TSubclassOf<class AProjectile> Projectile_BP;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpaceship2, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ProjectileMove_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpaceship2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ProjectileMove = { "ProjectileMove", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpaceship2, ProjectileMove), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ProjectileMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ProjectileMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpaceship2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ShipExplosionEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_RandMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpaceship2_Statics::NewProp_ProjectileMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpaceship2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpaceship2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpaceship2_Statics::ClassParams = {
		&AEnemySpaceship2::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemySpaceship2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpaceship2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpaceship2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpaceship2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpaceship2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemySpaceship2, 1749999050);
	template<> SPACEINVADERS_API UClass* StaticClass<AEnemySpaceship2>()
	{
		return AEnemySpaceship2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpaceship2(Z_Construct_UClass_AEnemySpaceship2, &AEnemySpaceship2::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AEnemySpaceship2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpaceship2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
