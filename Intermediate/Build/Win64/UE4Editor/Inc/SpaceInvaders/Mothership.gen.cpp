// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/Mothership.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMothership() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AMothership_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AMothership();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SPACEINVADERS_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AMothership::StaticRegisterNativesAMothership()
	{
	}
	UClass* Z_Construct_UClass_AMothership_NoRegister()
	{
		return AMothership::StaticClass();
	}
	struct Z_Construct_UClass_AMothership_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MothershipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MothershipMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset5;
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
	UObject* (*const Z_Construct_UClass_AMothership_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mothership.h" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_MothershipMeshComponent_MetaData[] = {
		{ "Category", "Mothership Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_MothershipMeshComponent = { "MothershipMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, MothershipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_MothershipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_MothershipMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset1_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset1 = { "GunOffset1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, GunOffset1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset2_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset2 = { "GunOffset2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, GunOffset2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset3_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset3 = { "GunOffset3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, GunOffset3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset4_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset4 = { "GunOffset4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, GunOffset4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset5_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset5 = { "GunOffset5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, GunOffset5), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, FireRate), METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_RandMove_MetaData[] = {
		{ "Comment", "//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_RandMove = { "RandMove", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, RandMove), Z_Construct_UClass_URandomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_RandMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_RandMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "Mothership" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"Component\")\n\x09\x09TSubclassOf<class AProjectile> Projectile_BP;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mothership.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Component\")\n               TSubclassOf<class AProjectile> Projectile_BP;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMothership_Statics::NewProp_ProjectileMove_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mothership.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMothership_Statics::NewProp_ProjectileMove = { "ProjectileMove", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMothership, ProjectileMove), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::NewProp_ProjectileMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::NewProp_ProjectileMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMothership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_MothershipMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_GunOffset5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_RandMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMothership_Statics::NewProp_ProjectileMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMothership_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMothership>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMothership_Statics::ClassParams = {
		&AMothership::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMothership_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMothership_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMothership_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMothership()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMothership_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMothership, 3931360847);
	template<> SPACEINVADERS_API UClass* StaticClass<AMothership>()
	{
		return AMothership::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMothership(Z_Construct_UClass_AMothership, &AMothership::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AMothership"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMothership);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
