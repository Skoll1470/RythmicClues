// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/StrangeSideEffectsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrangeSideEffectsGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsGameMode();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Class AStrangeSideEffectsGameMode
void AStrangeSideEffectsGameMode::StaticRegisterNativesAStrangeSideEffectsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStrangeSideEffectsGameMode);
UClass* Z_Construct_UClass_AStrangeSideEffectsGameMode_NoRegister()
{
	return AStrangeSideEffectsGameMode::StaticClass();
}
struct Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StrangeSideEffectsGameMode.h" },
		{ "ModuleRelativePath", "StrangeSideEffectsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrangeSideEffectsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics::ClassParams = {
	&AStrangeSideEffectsGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStrangeSideEffectsGameMode()
{
	if (!Z_Registration_Info_UClass_AStrangeSideEffectsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStrangeSideEffectsGameMode.OuterSingleton, Z_Construct_UClass_AStrangeSideEffectsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStrangeSideEffectsGameMode.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<AStrangeSideEffectsGameMode>()
{
	return AStrangeSideEffectsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStrangeSideEffectsGameMode);
AStrangeSideEffectsGameMode::~AStrangeSideEffectsGameMode() {}
// End Class AStrangeSideEffectsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStrangeSideEffectsGameMode, AStrangeSideEffectsGameMode::StaticClass, TEXT("AStrangeSideEffectsGameMode"), &Z_Registration_Info_UClass_AStrangeSideEffectsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStrangeSideEffectsGameMode), 2626891308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsGameMode_h_1291517570(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
