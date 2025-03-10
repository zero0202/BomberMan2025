// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EsperaTrampa.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN2025_EsperaTrampa_generated_h
#error "EsperaTrampa.generated.h already included, missing '#pragma once' in EsperaTrampa.h"
#endif
#define BOMBERMAN2025_EsperaTrampa_generated_h

#define FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEsperaTrampa(); \
	friend struct Z_Construct_UClass_AEsperaTrampa_Statics; \
public: \
	DECLARE_CLASS(AEsperaTrampa, AEsfera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan2025"), NO_API) \
	DECLARE_SERIALIZER(AEsperaTrampa)


#define FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEsperaTrampa(AEsperaTrampa&&); \
	AEsperaTrampa(const AEsperaTrampa&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEsperaTrampa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEsperaTrampa); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEsperaTrampa) \
	NO_API virtual ~AEsperaTrampa();


#define FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_13_PROLOG
#define FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_INCLASS_NO_PURE_DECLS \
	FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN2025_API UClass* StaticClass<class AEsperaTrampa>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
