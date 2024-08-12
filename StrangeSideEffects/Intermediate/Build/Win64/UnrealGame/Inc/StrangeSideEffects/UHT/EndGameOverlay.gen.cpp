// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/Public/EndGameOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameOverlay() {}

// Begin Cross Module References
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_UEndGameOverlay();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_UEndGameOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Class UEndGameOverlay
void UEndGameOverlay::StaticRegisterNativesUEndGameOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndGameOverlay);
UClass* Z_Construct_UClass_UEndGameOverlay_NoRegister()
{
	return UEndGameOverlay::StaticClass();
}
struct Z_Construct_UClass_UEndGameOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndGameOverlay.h" },
		{ "ModuleRelativePath", "Public/EndGameOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EndGameOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameOverlay_Statics::NewProp_TimerText = { "TimerText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndGameOverlay, TimerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerText_MetaData), NewProp_TimerText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameOverlay_Statics::NewProp_TimerText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndGameOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndGameOverlay_Statics::ClassParams = {
	&UEndGameOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEndGameOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndGameOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndGameOverlay()
{
	if (!Z_Registration_Info_UClass_UEndGameOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndGameOverlay.OuterSingleton, Z_Construct_UClass_UEndGameOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndGameOverlay.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<UEndGameOverlay>()
{
	return UEndGameOverlay::StaticClass();
}
UEndGameOverlay::UEndGameOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameOverlay);
UEndGameOverlay::~UEndGameOverlay() {}
// End Class UEndGameOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_EndGameOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndGameOverlay, UEndGameOverlay::StaticClass, TEXT("UEndGameOverlay"), &Z_Registration_Info_UClass_UEndGameOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndGameOverlay), 2917961351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_EndGameOverlay_h_4055496917(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_EndGameOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_EndGameOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
