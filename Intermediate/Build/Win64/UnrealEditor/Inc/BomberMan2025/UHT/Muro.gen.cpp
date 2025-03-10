// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan2025/Muro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuro() {}

// Begin Cross Module References
BOMBERMAN2025_API UClass* Z_Construct_UClass_AMuro();
BOMBERMAN2025_API UClass* Z_Construct_UClass_AMuro_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan2025();
// End Cross Module References

// Begin Class AMuro
void AMuro::StaticRegisterNativesAMuro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMuro);
UClass* Z_Construct_UClass_AMuro_NoRegister()
{
	return AMuro::StaticClass();
}
struct Z_Construct_UClass_AMuro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Muro.h" },
		{ "ModuleRelativePath", "Muro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMuro_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//malla del Muro\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Muro.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "malla del Muro" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMuro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_MeshMuro = { "MeshMuro", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMuro, MeshMuro), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMuro_MetaData), NewProp_MeshMuro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_MeshMuro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMuro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMuro_Statics::ClassParams = {
	&AMuro::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMuro_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams), Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMuro()
{
	if (!Z_Registration_Info_UClass_AMuro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMuro.OuterSingleton, Z_Construct_UClass_AMuro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMuro.OuterSingleton;
}
template<> BOMBERMAN2025_API UClass* StaticClass<AMuro>()
{
	return AMuro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMuro);
AMuro::~AMuro() {}
// End Class AMuro

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Muro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMuro, AMuro::StaticClass, TEXT("AMuro"), &Z_Registration_Info_UClass_AMuro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMuro), 4200719483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Muro_h_2134692911(TEXT("/Script/BomberMan2025"),
	Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Muro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan2025_Source_BomberMan2025_Muro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
