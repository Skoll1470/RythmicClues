// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/Public/PotionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotionActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_APotionActor();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_APotionActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Class APotionActor
void APotionActor::StaticRegisterNativesAPotionActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APotionActor);
UClass* Z_Construct_UClass_APotionActor_NoRegister()
{
	return APotionActor::StaticClass();
}
struct Z_Construct_UClass_APotionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PotionActor.h" },
		{ "ModuleRelativePath", "Public/PotionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "PotionActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PotionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotionActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APotionActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotionActor_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APotionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APotionActor_Statics::ClassParams = {
	&APotionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APotionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APotionActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APotionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APotionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APotionActor()
{
	if (!Z_Registration_Info_UClass_APotionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APotionActor.OuterSingleton, Z_Construct_UClass_APotionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APotionActor.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<APotionActor>()
{
	return APotionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APotionActor);
APotionActor::~APotionActor() {}
// End Class APotionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_PotionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APotionActor, APotionActor::StaticClass, TEXT("APotionActor"), &Z_Registration_Info_UClass_APotionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APotionActor), 2095075843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_PotionActor_h_2584932500(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_PotionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_PotionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
