// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/Public/StrangeSideEffectsHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrangeSideEffectsHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsHUD();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsHUD_NoRegister();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_UStrangeSideEffectsOverlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Class AStrangeSideEffectsHUD
void AStrangeSideEffectsHUD::StaticRegisterNativesAStrangeSideEffectsHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStrangeSideEffectsHUD);
UClass* Z_Construct_UClass_AStrangeSideEffectsHUD_NoRegister()
{
	return AStrangeSideEffectsHUD::StaticClass();
}
struct Z_Construct_UClass_AStrangeSideEffectsHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "StrangeSideEffectsHUD.h" },
		{ "ModuleRelativePath", "Public/StrangeSideEffectsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayClass_MetaData[] = {
		{ "Category", "Overlay" },
		{ "ModuleRelativePath", "Public/StrangeSideEffectsHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrangeSideEffectsHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::NewProp_OverlayClass = { "OverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsHUD, OverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStrangeSideEffectsOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayClass_MetaData), NewProp_OverlayClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::NewProp_OverlayClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::ClassParams = {
	&AStrangeSideEffectsHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStrangeSideEffectsHUD()
{
	if (!Z_Registration_Info_UClass_AStrangeSideEffectsHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStrangeSideEffectsHUD.OuterSingleton, Z_Construct_UClass_AStrangeSideEffectsHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStrangeSideEffectsHUD.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<AStrangeSideEffectsHUD>()
{
	return AStrangeSideEffectsHUD::StaticClass();
}
AStrangeSideEffectsHUD::AStrangeSideEffectsHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStrangeSideEffectsHUD);
AStrangeSideEffectsHUD::~AStrangeSideEffectsHUD() {}
// End Class AStrangeSideEffectsHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_StrangeSideEffectsHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStrangeSideEffectsHUD, AStrangeSideEffectsHUD::StaticClass, TEXT("AStrangeSideEffectsHUD"), &Z_Registration_Info_UClass_AStrangeSideEffectsHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStrangeSideEffectsHUD), 727906059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_StrangeSideEffectsHUD_h_1402547373(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_StrangeSideEffectsHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_StrangeSideEffectsHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
