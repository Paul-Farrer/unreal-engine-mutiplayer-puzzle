// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformPuzzleGame/Grab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrab() {}
// Cross Module References
	PLATFORMPUZZLEGAME_API UClass* Z_Construct_UClass_UGrab_NoRegister();
	PLATFORMPUZZLEGAME_API UClass* Z_Construct_UClass_UGrab();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PlatformPuzzleGame();
// End Cross Module References
	void UGrab::StaticRegisterNativesUGrab()
	{
	}
	UClass* Z_Construct_UClass_UGrab_NoRegister()
	{
		return UGrab::StaticClass();
	}
	struct Z_Construct_UClass_UGrab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformPuzzleGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Grab.h" },
		{ "ModuleRelativePath", "Grab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrab_Statics::ClassParams = {
		&UGrab::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrab, 3678511484);
	template<> PLATFORMPUZZLEGAME_API UClass* StaticClass<UGrab>()
	{
		return UGrab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrab(Z_Construct_UClass_UGrab, &UGrab::StaticClass, TEXT("/Script/PlatformPuzzleGame"), TEXT("UGrab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
