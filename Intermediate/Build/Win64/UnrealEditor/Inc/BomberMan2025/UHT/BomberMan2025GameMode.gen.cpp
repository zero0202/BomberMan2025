// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan2025/BomberMan2025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan2025GameMode() {}

// Begin Cross Module References
BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomberMan2025GameMode();
BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomberMan2025GameMode_NoRegister();
BOMBERMAN2025_API UClass* Z_Construct_UClass_AEsfera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan2025();
// End Cross Module References

// Begin Class ABomberMan2025GameMode Function DestroyActorFunction
struct Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan2025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan2025GameMode, nullptr, "DestroyActorFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan2025GameMode::execDestroyActorFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyActorFunction();
	P_NATIVE_END;
}
// End Class ABomberMan2025GameMode Function DestroyActorFunction

// Begin Class ABomberMan2025GameMode
void ABomberMan2025GameMode::StaticRegisterNativesABomberMan2025GameMode()
{
	UClass* Class = ABomberMan2025GameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyActorFunction", &ABomberMan2025GameMode::execDestroyActorFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan2025GameMode);
UClass* Z_Construct_UClass_ABomberMan2025GameMode_NoRegister()
{
	return ABomberMan2025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan2025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan2025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//funcion para destruir el actor esfera\n" },
#endif
		{ "ModuleRelativePath", "BomberMan2025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "funcion para destruir el actor esfera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan2025GameMode_DestroyActorFunction, "DestroyActorFunction" }, // 3417105992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan2025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan2025GameMode_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan2025GameMode, SpawnedActor), Z_Construct_UClass_AEsfera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan2025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan2025GameMode_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan2025GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan2025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan2025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan2025GameMode_Statics::ClassParams = {
	&ABomberMan2025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABomberMan2025GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan2025GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan2025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan2025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan2025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan2025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan2025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan2025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan2025GameMode.OuterSingleton;
}
template<> BOMBERMAN2025_API UClass* StaticClass<ABomberMan2025GameMode>()
{
	return ABomberMan2025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan2025GameMode);
ABomberMan2025GameMode::~ABomberMan2025GameMode() {}
// End Class ABomberMan2025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan2025GameMode, ABomberMan2025GameMode::StaticClass, TEXT("ABomberMan2025GameMode"), &Z_Registration_Info_UClass_ABomberMan2025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan2025GameMode), 379433618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_554564516(TEXT("/Script/BomberMan2025"),
	Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_BomberMan2025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
