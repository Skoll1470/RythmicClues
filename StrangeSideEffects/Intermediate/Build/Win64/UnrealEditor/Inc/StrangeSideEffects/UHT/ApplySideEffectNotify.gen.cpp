// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/Public/ApplySideEffectNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplySideEffectNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsCharacter_NoRegister();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_UApplySideEffectNotify();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_UApplySideEffectNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Class UApplySideEffectNotify
void UApplySideEffectNotify::StaticRegisterNativesUApplySideEffectNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApplySideEffectNotify);
UClass* Z_Construct_UClass_UApplySideEffectNotify_NoRegister()
{
	return UApplySideEffectNotify::StaticClass();
}
struct Z_Construct_UClass_UApplySideEffectNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ApplySideEffectNotify.h" },
		{ "ModuleRelativePath", "Public/ApplySideEffectNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ApplySideEffectNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplySideEffectNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApplySideEffectNotify_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplySideEffectNotify, PlayerCharacter), Z_Construct_UClass_AStrangeSideEffectsCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplySideEffectNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplySideEffectNotify_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplySideEffectNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UApplySideEffectNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplySideEffectNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplySideEffectNotify_Statics::ClassParams = {
	&UApplySideEffectNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UApplySideEffectNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UApplySideEffectNotify_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UApplySideEffectNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UApplySideEffectNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UApplySideEffectNotify()
{
	if (!Z_Registration_Info_UClass_UApplySideEffectNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplySideEffectNotify.OuterSingleton, Z_Construct_UClass_UApplySideEffectNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UApplySideEffectNotify.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<UApplySideEffectNotify>()
{
	return UApplySideEffectNotify::StaticClass();
}
UApplySideEffectNotify::UApplySideEffectNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UApplySideEffectNotify);
UApplySideEffectNotify::~UApplySideEffectNotify() {}
// End Class UApplySideEffectNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_ApplySideEffectNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UApplySideEffectNotify, UApplySideEffectNotify::StaticClass, TEXT("UApplySideEffectNotify"), &Z_Registration_Info_UClass_UApplySideEffectNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplySideEffectNotify), 2524686295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_ApplySideEffectNotify_h_3517414205(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_ApplySideEffectNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_Public_ApplySideEffectNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
