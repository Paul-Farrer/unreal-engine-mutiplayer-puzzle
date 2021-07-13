// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef PLATFORMPUZZLEGAME_PlatformPressurePlate_generated_h
#error "PlatformPressurePlate.generated.h already included, missing '#pragma once' in PlatformPressurePlate.h"
#endif
#define PLATFORMPUZZLEGAME_PlatformPressurePlate_generated_h

#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_SPARSE_DATA
#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformPressurePlate(); \
	friend struct Z_Construct_UClass_APlatformPressurePlate_Statics; \
public: \
	DECLARE_CLASS(APlatformPressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformPuzzleGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformPressurePlate)


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformPressurePlate(); \
	friend struct Z_Construct_UClass_APlatformPressurePlate_Statics; \
public: \
	DECLARE_CLASS(APlatformPressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformPuzzleGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformPressurePlate)


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformPressurePlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformPressurePlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformPressurePlate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformPressurePlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformPressurePlate(APlatformPressurePlate&&); \
	NO_API APlatformPressurePlate(const APlatformPressurePlate&); \
public:


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformPressurePlate(APlatformPressurePlate&&); \
	NO_API APlatformPressurePlate(const APlatformPressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformPressurePlate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformPressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformPressurePlate)


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerVolume() { return STRUCT_OFFSET(APlatformPressurePlate, TriggerVolume); } \
	FORCEINLINE static uint32 __PPO__PlatformsToTrigger() { return STRUCT_OFFSET(APlatformPressurePlate, PlatformsToTrigger); }


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_9_PROLOG
#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_PRIVATE_PROPERTY_OFFSET \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_SPARSE_DATA \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_RPC_WRAPPERS \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_INCLASS \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_PRIVATE_PROPERTY_OFFSET \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_SPARSE_DATA \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_INCLASS_NO_PURE_DECLS \
	PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMPUZZLEGAME_API UClass* StaticClass<class APlatformPressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformPuzzleGame_Source_PlatformPuzzleGame_PlatformPressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
