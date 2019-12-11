// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidsGame/ParentWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentWeapon() {}
// Cross Module References
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AParentWeapon_NoRegister();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AParentWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AsteroidsGame();
	ASTEROIDSGAME_API UFunction* Z_Construct_UFunction_AParentWeapon_Reload();
	ASTEROIDSGAME_API UFunction* Z_Construct_UFunction_AParentWeapon_StartFiringWeapon();
	ASTEROIDSGAME_API UFunction* Z_Construct_UFunction_AParentWeapon_StopFiringWeapon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AParentBullet_NoRegister();
// End Cross Module References
	void AParentWeapon::StaticRegisterNativesAParentWeapon()
	{
		UClass* Class = AParentWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reload", &AParentWeapon::execReload },
			{ "StartFiringWeapon", &AParentWeapon::execStartFiringWeapon },
			{ "StopFiringWeapon", &AParentWeapon::execStopFiringWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParentWeapon_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentWeapon_Reload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Sets a Timer and after the reload time is over, \"FinishReloading\" method is called.\n\x09*/" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
		{ "ToolTip", "* Sets a Timer and after the reload time is over, \"FinishReloading\" method is called." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentWeapon_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentWeapon, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentWeapon_Reload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentWeapon_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentWeapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentWeapon_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentWeapon_StartFiringWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentWeapon_StartFiringWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Starts Firing the Bullets according to the Owner's Viewing Direction & Weapon Info. Stops when StopFiringWeapon() is called.\n\x09*/" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
		{ "ToolTip", "Starts Firing the Bullets according to the Owner's Viewing Direction & Weapon Info. Stops when StopFiringWeapon() is called." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentWeapon_StartFiringWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentWeapon, nullptr, "StartFiringWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentWeapon_StartFiringWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentWeapon_StartFiringWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentWeapon_StartFiringWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentWeapon_StartFiringWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentWeapon_StopFiringWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentWeapon_StopFiringWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * StopFiringWeapon\n\x09*/" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
		{ "ToolTip", "StopFiringWeapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentWeapon_StopFiringWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentWeapon, nullptr, "StopFiringWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentWeapon_StopFiringWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentWeapon_StopFiringWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentWeapon_StopFiringWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentWeapon_StopFiringWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParentWeapon_NoRegister()
	{
		return AParentWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AParentWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentBulletCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_CurrentBulletCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FiringDeltaAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_FiringDeltaAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FiringDirectionNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_FiringDirectionNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReloadingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_ReloadingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FiringRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_FiringRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BulletRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_BulletRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BulletSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_BulletSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MagazineCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_MagazineCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_WeaponName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParentWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidsGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParentWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParentWeapon_Reload, "Reload" }, // 2452077920
		{ &Z_Construct_UFunction_AParentWeapon_StartFiringWeapon, "StartFiringWeapon" }, // 1747228200
		{ &Z_Construct_UFunction_AParentWeapon_StopFiringWeapon, "StopFiringWeapon" }, // 1687508184
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParentWeapon.h" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_CurrentBulletCount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Bullet Count" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_CurrentBulletCount = { "m_CurrentBulletCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_CurrentBulletCount), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_CurrentBulletCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_CurrentBulletCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDeltaAngle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Firing Direction Delta Angle" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDeltaAngle = { "m_FiringDeltaAngle", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_FiringDeltaAngle), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDeltaAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDeltaAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDirectionNum_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Firing Direction Count" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDirectionNum = { "m_FiringDirectionNum", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_FiringDirectionNum), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDirectionNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDirectionNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_ReloadingTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Reloading Time" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_ReloadingTime = { "m_ReloadingTime", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_ReloadingTime), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_ReloadingTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_ReloadingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Firing Rate" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringRate = { "m_FiringRate", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_FiringRate), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletRange_MetaData[] = {
		{ "Category", "Bullet" },
		{ "DisplayName", "Bullet Range" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletRange = { "m_BulletRange", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_BulletRange), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletSpeed_MetaData[] = {
		{ "Category", "Bullet" },
		{ "DisplayName", "Bullet Speed" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletSpeed = { "m_BulletSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_BulletSpeed), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletClass_MetaData[] = {
		{ "Category", "Bullet" },
		{ "DisplayName", "Bullet Class" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletClass = { "m_BulletClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_BulletClass), Z_Construct_UClass_AParentBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_MagazineCapacity_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Magazine Capacity" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_MagazineCapacity = { "m_MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_MagazineCapacity), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_MagazineCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_MagazineCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_WeaponName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "Weapon Name" },
		{ "ModuleRelativePath", "ParentWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_WeaponName = { "m_WeaponName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentWeapon, m_WeaponName), METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_WeaponName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_WeaponName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_CurrentBulletCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDeltaAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringDirectionNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_ReloadingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_FiringRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_MagazineCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentWeapon_Statics::NewProp_m_WeaponName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParentWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParentWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParentWeapon_Statics::ClassParams = {
		&AParentWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParentWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParentWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParentWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParentWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParentWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParentWeapon, 3168230126);
	template<> ASTEROIDSGAME_API UClass* StaticClass<AParentWeapon>()
	{
		return AParentWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParentWeapon(Z_Construct_UClass_AParentWeapon, &AParentWeapon::StaticClass, TEXT("/Script/AsteroidsGame"), TEXT("AParentWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParentWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
