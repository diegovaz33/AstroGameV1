// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
#ifdef ASTEROIDSGAME_MyCPPBlueprintLibrary_generated_h
#error "MyCPPBlueprintLibrary.generated.h already included, missing '#pragma once' in MyCPPBlueprintLibrary.h"
#endif
#define ASTEROIDSGAME_MyCPPBlueprintLibrary_generated_h

#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInView) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(APlayerController,Z_Param_ObservingView); \
		P_GET_UBOOL_REF(Z_Param_Out_InView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyCPPBlueprintLibrary::IsInView(Z_Param_Actor,Z_Param_ObservingView,Z_Param_Out_InView); \
		P_NATIVE_END; \
	}


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInView) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(APlayerController,Z_Param_ObservingView); \
		P_GET_UBOOL_REF(Z_Param_Out_InView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyCPPBlueprintLibrary::IsInView(Z_Param_Actor,Z_Param_ObservingView,Z_Param_Out_InView); \
		P_NATIVE_END; \
	}


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCPPBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyCPPBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(UMyCPPBlueprintLibrary)


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyCPPBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyCPPBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(UMyCPPBlueprintLibrary)


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCPPBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCPPBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCPPBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCPPBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCPPBlueprintLibrary(UMyCPPBlueprintLibrary&&); \
	NO_API UMyCPPBlueprintLibrary(const UMyCPPBlueprintLibrary&); \
public:


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCPPBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCPPBlueprintLibrary(UMyCPPBlueprintLibrary&&); \
	NO_API UMyCPPBlueprintLibrary(const UMyCPPBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCPPBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCPPBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCPPBlueprintLibrary)


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_13_PROLOG
#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_RPC_WRAPPERS \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_INCLASS \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class UMyCPPBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astros_Source_AsteroidsGame_MyCPPBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
