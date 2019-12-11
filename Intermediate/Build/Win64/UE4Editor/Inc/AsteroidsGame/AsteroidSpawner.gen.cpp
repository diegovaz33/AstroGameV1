// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidsGame/AsteroidSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidSpawner() {}
// Cross Module References
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AAsteroidSpawner_NoRegister();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AAsteroidSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AsteroidsGame();
	ASTEROIDSGAME_API UFunction* Z_Construct_UFunction_AAsteroidSpawner_Init();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AParentAsteroid_NoRegister();
// End Cross Module References
	void AAsteroidSpawner::StaticRegisterNativesAAsteroidSpawner()
	{
		UClass* Class = AAsteroidSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AAsteroidSpawner::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsteroidSpawner_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsteroidSpawner_Init_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Initializing everything.\n\x09* This is separated from the Begin Play Implementation because\n\x09* The View Target Blend is done after BeginPlay and it is necessary\n\x09* To get the actor the View Target holds (so that we get the correct camera aspect ratio + fovy)\n\x09*/" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
		{ "ToolTip", "Initializing everything.\n      * This is separated from the Begin Play Implementation because\n      * The View Target Blend is done after BeginPlay and it is necessary\n      * To get the actor the View Target holds (so that we get the correct camera aspect ratio + fovy)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsteroidSpawner_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroidSpawner, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsteroidSpawner_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAsteroidSpawner_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsteroidSpawner_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsteroidSpawner_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsteroidSpawner_NoRegister()
	{
		return AAsteroidSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroidSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLevelToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsteroidClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsteroidClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AsteroidClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSpawnNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpawnNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinSpawnNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroidSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidsGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsteroidSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsteroidSpawner_Init, "Init" }, // 2802074185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsteroidSpawner.h" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxLevelToSpawn_MetaData[] = {
		{ "Category", "AsteroidSpawner" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxLevelToSpawn = { "MaxLevelToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroidSpawner, MaxLevelToSpawn), METADATA_PARAMS(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxLevelToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxLevelToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses_MetaData[] = {
		{ "Category", "AsteroidSpawner" },
		{ "Comment", "/* The classes to use to Spawn different Asteroids */" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
		{ "ToolTip", "The classes to use to Spawn different Asteroids" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses = { "AsteroidClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroidSpawner, AsteroidClasses), METADATA_PARAMS(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses_Inner = { "AsteroidClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParentAsteroid_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnNumber_MetaData[] = {
		{ "Category", "AsteroidSpawner" },
		{ "Comment", "/* The Max amount of Asteroids to spawn when SpawnAsteroids() is called */" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
		{ "ToolTip", "The Max amount of Asteroids to spawn when SpawnAsteroids() is called" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnNumber = { "MaxSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroidSpawner, MaxSpawnNumber), METADATA_PARAMS(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnNumber_MetaData[] = {
		{ "Category", "AsteroidSpawner" },
		{ "Comment", "/* The Min amount of Asteroids to spawn when SpawnAsteroids() is called */" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
		{ "ToolTip", "The Min amount of Asteroids to spawn when SpawnAsteroids() is called" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnNumber = { "MinSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroidSpawner, MinSpawnNumber), METADATA_PARAMS(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnRate_MetaData[] = {
		{ "Category", "AsteroidSpawner" },
		{ "Comment", "/* How often to spawn a Certain Number of Asteroids , in seconds */" },
		{ "ModuleRelativePath", "AsteroidSpawner.h" },
		{ "ToolTip", "How often to spawn a Certain Number of Asteroids , in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnRate = { "SpawnRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroidSpawner, SpawnRate), METADATA_PARAMS(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxLevelToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_AsteroidClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroidSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidSpawner_Statics::ClassParams = {
		&AAsteroidSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroidSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroidSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroidSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroidSpawner, 3206679924);
	template<> ASTEROIDSGAME_API UClass* StaticClass<AAsteroidSpawner>()
	{
		return AAsteroidSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroidSpawner(Z_Construct_UClass_AAsteroidSpawner, &AAsteroidSpawner::StaticClass, TEXT("/Script/AsteroidsGame"), TEXT("AAsteroidSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
