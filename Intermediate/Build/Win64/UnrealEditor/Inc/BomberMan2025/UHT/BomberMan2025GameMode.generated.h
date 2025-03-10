// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BomberMan2025GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN2025_BomberMan2025GameMode_generated_h
#error "BomberMan2025GameMode.generated.h already included, missing '#pragma once' in BomberMan2025GameMode.h"
#endif
#define BOMBERMAN2025_BomberMan2025GameMode_generated_h

#define FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyActorFunction);


#define FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomberMan2025GameMode(); \
	friend struct Z_Construct_UClass_ABomberMan2025GameMode_Statics; \
public: \
	DECLARE_CLASS(ABomberMan2025GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan2025"), BOMBERMAN2025_API) \
	DECLARE_SERIALIZER(ABomberMan2025GameMode)


#define FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABomberMan2025GameMode(ABomberMan2025GameMode&&); \
	ABomberMan2025GameMode(const ABomberMan2025GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN2025_API, ABomberMan2025GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberMan2025GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomberMan2025GameMode) \
	BOMBERMAN2025_API virtual ~ABomberMan2025GameMode();


#define FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_10_PROLOG
#define FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN2025_API UClass* StaticClass<class ABomberMan2025GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
