// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan2025/EsperaTrampa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEsperaTrampa() {}

// Begin Cross Module References
BOMBERMAN2025_API UClass* Z_Construct_UClass_AEsfera();
BOMBERMAN2025_API UClass* Z_Construct_UClass_AEsperaTrampa();
BOMBERMAN2025_API UClass* Z_Construct_UClass_AEsperaTrampa_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan2025();
// End Cross Module References

// Begin Class AEsperaTrampa Function GetScore
struct Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics
{
	struct EsperaTrampa_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EsperaTrampa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EsperaTrampa_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEsperaTrampa, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::EsperaTrampa_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::EsperaTrampa_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEsperaTrampa_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEsperaTrampa_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEsperaTrampa::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AEsperaTrampa Function GetScore

// Begin Class AEsperaTrampa Function SetScore
struct Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics
{
	struct EsperaTrampa_eventSetScore_Parms
	{
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EsperaTrampa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EsperaTrampa_eventSetScore_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEsperaTrampa, nullptr, "SetScore", nullptr, nullptr, Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::EsperaTrampa_eventSetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::EsperaTrampa_eventSetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEsperaTrampa_SetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEsperaTrampa_SetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEsperaTrampa::execSetScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScore(Z_Param_NewScore);
	P_NATIVE_END;
}
// End Class AEsperaTrampa Function SetScore

// Begin Class AEsperaTrampa
void AEsperaTrampa::StaticRegisterNativesAEsperaTrampa()
{
	UClass* Class = AEsperaTrampa::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &AEsperaTrampa::execGetScore },
		{ "SetScore", &AEsperaTrampa::execSetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEsperaTrampa);
UClass* Z_Construct_UClass_AEsperaTrampa_NoRegister()
{
	return AEsperaTrampa::StaticClass();
}
struct Z_Construct_UClass_AEsperaTrampa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EsperaTrampa.h" },
		{ "ModuleRelativePath", "EsperaTrampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
		{ "ModuleRelativePath", "EsperaTrampa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEsperaTrampa_GetScore, "GetScore" }, // 2451186082
		{ &Z_Construct_UFunction_AEsperaTrampa_SetScore, "SetScore" }, // 832145113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEsperaTrampa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEsperaTrampa_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEsperaTrampa, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEsperaTrampa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsperaTrampa_Statics::NewProp_CurrentScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEsperaTrampa_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEsperaTrampa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEsfera,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEsperaTrampa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEsperaTrampa_Statics::ClassParams = {
	&AEsperaTrampa::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEsperaTrampa_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEsperaTrampa_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEsperaTrampa_Statics::Class_MetaDataParams), Z_Construct_UClass_AEsperaTrampa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEsperaTrampa()
{
	if (!Z_Registration_Info_UClass_AEsperaTrampa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEsperaTrampa.OuterSingleton, Z_Construct_UClass_AEsperaTrampa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEsperaTrampa.OuterSingleton;
}
template<> BOMBERMAN2025_API UClass* StaticClass<AEsperaTrampa>()
{
	return AEsperaTrampa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEsperaTrampa);
AEsperaTrampa::~AEsperaTrampa() {}
// End Class AEsperaTrampa

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEsperaTrampa, AEsperaTrampa::StaticClass, TEXT("AEsperaTrampa"), &Z_Registration_Info_UClass_AEsperaTrampa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEsperaTrampa), 1239406705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_2989580849(TEXT("/Script/BomberMan2025"),
	Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_EsperaTrampa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
