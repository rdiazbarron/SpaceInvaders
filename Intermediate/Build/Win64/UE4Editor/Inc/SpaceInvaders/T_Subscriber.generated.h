// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADERS_T_Subscriber_generated_h
#error "T_Subscriber.generated.h already included, missing '#pragma once' in T_Subscriber.h"
#endif
#define SPACEINVADERS_T_Subscriber_generated_h

#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_SPARSE_DATA
#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_RPC_WRAPPERS
#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACEINVADERS_API UT_Subscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT_Subscriber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACEINVADERS_API, UT_Subscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT_Subscriber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACEINVADERS_API UT_Subscriber(UT_Subscriber&&); \
	SPACEINVADERS_API UT_Subscriber(const UT_Subscriber&); \
public:


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACEINVADERS_API UT_Subscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACEINVADERS_API UT_Subscriber(UT_Subscriber&&); \
	SPACEINVADERS_API UT_Subscriber(const UT_Subscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACEINVADERS_API, UT_Subscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT_Subscriber); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT_Subscriber)


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUT_Subscriber(); \
	friend struct Z_Construct_UClass_UT_Subscriber_Statics; \
public: \
	DECLARE_CLASS(UT_Subscriber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), SPACEINVADERS_API) \
	DECLARE_SERIALIZER(UT_Subscriber)


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_GENERATED_UINTERFACE_BODY() \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_GENERATED_UINTERFACE_BODY() \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IT_Subscriber() {} \
public: \
	typedef UT_Subscriber UClassType; \
	typedef IT_Subscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IT_Subscriber() {} \
public: \
	typedef UT_Subscriber UClassType; \
	typedef IT_Subscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_10_PROLOG
#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_RPC_WRAPPERS \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERS_API UClass* StaticClass<class UT_Subscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpaceInvaders_T_Subscriber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
