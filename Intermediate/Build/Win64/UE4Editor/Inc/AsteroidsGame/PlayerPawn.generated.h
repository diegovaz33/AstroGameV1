// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDSGAME_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define ASTEROIDSGAME_PlayerPawn_generated_h

#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_RPC_WRAPPERS \
	virtual void HandleAsteroidDestroyed_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleAsteroidDestroyed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleAsteroidDestroyed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim(); \
		P_NATIVE_END; \
	}


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAsteroidDestroyed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleAsteroidDestroyed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Aim(); \
		P_NATIVE_END; \
	}


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_EVENT_PARMS
#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_CALLBACK_WRAPPERS
#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Astros_Source_AsteroidsGame_PlayerPawn_h_9_PROLOG \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_EVENT_PARMS


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_RPC_WRAPPERS \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_CALLBACK_WRAPPERS \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_INCLASS \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astros_Source_AsteroidsGame_PlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_CALLBACK_WRAPPERS \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astros_Source_AsteroidsGame_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
