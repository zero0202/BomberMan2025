// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan2025/Esfera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEsfera() {}

// Begin Cross Module References
BOMBERMAN2025_API UClass* Z_Construct_UClass_AEsfera();
BOMBERMAN2025_API UClass* Z_Construct_UClass_AEsfera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan2025();
// End Cross Module References

// Begin Class AEsfera
void AEsfera::StaticRegisterNativesAEsfera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEsfera);
UClass* Z_Construct_UClass_AEsfera_NoRegister()
{
	return AEsfera::StaticClass();
}
struct Z_Construct_UClass_AEsfera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Esfera.h" },
		{ "ModuleRelativePath", "Esfera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshEsfera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Esfera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshEsfera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEsfera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEsfera_Statics::NewProp_MeshEsfera = { "MeshEsfera", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEsfera, MeshEsfera), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshEsfera_MetaData), NewProp_MeshEsfera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEsfera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsfera_Statics::NewProp_MeshEsfera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEsfera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEsfera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEsfera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEsfera_Statics::ClassParams = {
	&AEsfera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEsfera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEsfera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEsfera_Statics::Class_MetaDataParams), Z_Construct_UClass_AEsfera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEsfera()
{
	if (!Z_Registration_Info_UClass_AEsfera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEsfera.OuterSingleton, Z_Construct_UClass_AEsfera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEsfera.OuterSingleton;
}
template<> BOMBERMAN2025_API UClass* StaticClass<AEsfera>()
{
	return AEsfera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEsfera);
AEsfera::~AEsfera() {}
// End Class AEsfera

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Esfera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEsfera, AEsfera::StaticClass, TEXT("AEsfera"), &Z_Registration_Info_UClass_AEsfera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEsfera), 3223932312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Esfera_h_2547498157(TEXT("/Script/BomberMan2025"),
	Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Esfera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Esfera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
