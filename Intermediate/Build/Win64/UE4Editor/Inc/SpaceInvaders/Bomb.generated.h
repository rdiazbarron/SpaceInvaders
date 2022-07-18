// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADERS_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define SPACEINVADERS_Bomb_generated_h

#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_SPARSE_DATA
#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_RPC_WRAPPERS
#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public:


#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb)


#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_PRIVATE_PROPERTY_OFFSET
#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_12_PROLOG
#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_RPC_WRAPPERS \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_INCLASS \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_Bomb_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERS_API UClass* StaticClass<class ABomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpaceInvaders_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
