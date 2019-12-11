// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ASTEROIDSGAME_ParentBullet_generated_h
#error "ParentBullet.generated.h already included, missing '#pragma once' in ParentBullet.h"
#endif
#define ASTEROIDSGAME_ParentBullet_generated_h

#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBulletOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBulletOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBulletOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBulletOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParentBullet(); \
	friend struct Z_Construct_UClass_AParentBullet_Statics; \
public: \
	DECLARE_CLASS(AParentBullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AParentBullet)


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParentBullet(); \
	friend struct Z_Construct_UClass_AParentBullet_Statics; \
public: \
	DECLARE_CLASS(AParentBullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AParentBullet)


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParentBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParentBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentBullet(AParentBullet&&); \
	NO_API AParentBullet(const AParentBullet&); \
public:


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentBullet(AParentBullet&&); \
	NO_API AParentBullet(const AParentBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParentBullet)


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Damage() { return STRUCT_OFFSET(AParentBullet, m_Damage); } \
	FORCEINLINE static uint32 __PPO__m_DestroyOnHit() { return STRUCT_OFFSET(AParentBullet, m_DestroyOnHit); }


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_9_PROLOG
#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_RPC_WRAPPERS \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_INCLASS \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_INCLASS_NO_PURE_DECLS \
	AstroGameV1_Source_AsteroidsGame_ParentBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class AParentBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AstroGameV1_Source_AsteroidsGame_ParentBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
