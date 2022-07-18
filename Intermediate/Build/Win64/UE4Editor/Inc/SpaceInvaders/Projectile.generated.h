// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADERS_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define SPACEINVADERS_Projectile_generated_h

#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_SPARSE_DATA
#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_RPC_WRAPPERS
#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_14_PROLOG
#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_RPC_WRAPPERS \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_INCLASS \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERS_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpaceInvaders_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
