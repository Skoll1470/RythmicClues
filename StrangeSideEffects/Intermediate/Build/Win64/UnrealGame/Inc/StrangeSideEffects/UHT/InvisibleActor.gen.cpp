// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/Public/InvisibleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvisibleActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AInvisibleActor();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AInvisibleActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Class AInvisibleActor
void AInvisibleActor::StaticRegisterNativesAInvisibleActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInvisibleActor);
UClass* Z_Construct_UClass_AInvisibleActor_NoRegister()
{
	return AInvisibleActor::StaticClass();
}
struct Z_Construct_UClass_AInvisibleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InvisibleActor.h" },
		{ "ModuleRelativePath", "Public/InvisibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "InvisibleActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InvisibleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvisibleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvisibleActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInvisibleActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvisibleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvisibleActor_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInvisibleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInvisibleActor_Statics::ClassParams = {
	&AInvisibleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInvisibleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInvisibleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInvisibleActor()
{
	if (!Z_Registration_Info_UClass_AInvisibleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInvisibleActor.OuterSingleton, Z_Construct_UClass_AInvisibleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInvisibleActor.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<AInvisibleActor>()
{
	return AInvisibleActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInvisibleActor);
AInvisibleActor::~AInvisibleActor() {}
// End Class AInvisibleActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_InvisibleActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInvisibleActor, AInvisibleActor::StaticClass, TEXT("AInvisibleActor"), &Z_Registration_Info_UClass_AInvisibleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInvisibleActor), 2710112964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_InvisibleActor_h_1590994203(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_InvisibleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_InvisibleActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
