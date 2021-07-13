// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformPuzzleGame/PlatformPuzzleGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformPuzzleGameGameMode() {}
// Cross Module References
	PLATFORMPUZZLEGAME_API UClass* Z_Construct_UClass_APlatformPuzzleGameGameMode_NoRegister();
	PLATFORMPUZZLEGAME_API UClass* Z_Construct_UClass_APlatformPuzzleGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlatformPuzzleGame();
// End Cross Module References
	void APlatformPuzzleGameGameMode::StaticRegisterNativesAPlatformPuzzleGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_APlatformPuzzleGameGameMode_NoRegister()
	{
		return APlatformPuzzleGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformPuzzleGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformPuzzleGameGameMode.h" },
		{ "ModuleRelativePath", "PlatformPuzzleGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformPuzzleGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::ClassParams = {
		&APlatformPuzzleGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformPuzzleGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformPuzzleGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformPuzzleGameGameMode, 932577597);
	template<> PLATFORMPUZZLEGAME_API UClass* StaticClass<APlatformPuzzleGameGameMode>()
	{
		return APlatformPuzzleGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformPuzzleGameGameMode(Z_Construct_UClass_APlatformPuzzleGameGameMode, &APlatformPuzzleGameGameMode::StaticClass, TEXT("/Script/PlatformPuzzleGame"), TEXT("APlatformPuzzleGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformPuzzleGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
