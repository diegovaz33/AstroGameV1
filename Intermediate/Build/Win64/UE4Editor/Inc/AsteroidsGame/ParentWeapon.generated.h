// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDSGAME_ParentWeapon_generated_h
#error "ParentWeapon.generated.h already included, missing '#pragma once' in ParentWeapon.h"
#endif
#define ASTEROIDSGAME_ParentWeapon_generated_h

#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopFiringWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFiringWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFiringWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFiringWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	}


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopFiringWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFiringWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFiringWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFiringWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	}


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParentWeapon(); \
	friend struct Z_Construct_UClass_AParentWeapon_Statics; \
public: \
	DECLARE_CLASS(AParentWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AParentWeapon)


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAParentWeapon(); \
	friend struct Z_Construct_UClass_AParentWeapon_Statics; \
public: \
	DECLARE_CLASS(AParentWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AParentWeapon)


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParentWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParentWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentWeapon(AParentWeapon&&); \
	NO_API AParentWeapon(const AParentWeapon&); \
public:


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentWeapon(AParentWeapon&&); \
	NO_API AParentWeapon(const AParentWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParentWeapon)


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_PRIVATE_PROPERTY_OFFSET
#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_11_PROLOG
#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_RPC_WRAPPERS \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_INCLASS \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_INCLASS_NO_PURE_DECLS \
	AstroGameV1_Source_AsteroidsGame_ParentWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class AParentWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AstroGameV1_Source_AsteroidsGame_ParentWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
