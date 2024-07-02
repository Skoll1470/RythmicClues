// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrangeSideEffects/StrangeSideEffectsCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrangeSideEffectsCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsCharacter();
STRANGESIDEEFFECTS_API UClass* Z_Construct_UClass_AStrangeSideEffectsCharacter_NoRegister();
STRANGESIDEEFFECTS_API UEnum* Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply();
UPackage* Z_Construct_UPackage__Script_StrangeSideEffects();
// End Cross Module References

// Begin Enum ESideEffectToApply
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESideEffectToApply;
static UEnum* ESideEffectToApply_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESideEffectToApply.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESideEffectToApply.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply, (UObject*)Z_Construct_UPackage__Script_StrangeSideEffects(), TEXT("ESideEffectToApply"));
	}
	return Z_Registration_Info_UEnum_ESideEffectToApply.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UEnum* StaticEnum<ESideEffectToApply>()
{
	return ESideEffectToApply_StaticEnum();
}
struct Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESETA_Clear.DisplayName", "Clear" },
		{ "ESETA_Clear.Name", "ESideEffectToApply::ESETA_Clear" },
		{ "ESETA_Float.DisplayName", "Float" },
		{ "ESETA_Float.Name", "ESideEffectToApply::ESETA_Float" },
		{ "ESETA_Small.DisplayName", "Small" },
		{ "ESETA_Small.Name", "ESideEffectToApply::ESETA_Small" },
		{ "ESETA_Speed.DisplayName", "Speed" },
		{ "ESETA_Speed.Name", "ESideEffectToApply::ESETA_Speed" },
		{ "ESETA_Visible.DisplayName", "Visible" },
		{ "ESETA_Visible.Name", "ESideEffectToApply::ESETA_Visible" },
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESideEffectToApply::ESETA_Small", (int64)ESideEffectToApply::ESETA_Small },
		{ "ESideEffectToApply::ESETA_Speed", (int64)ESideEffectToApply::ESETA_Speed },
		{ "ESideEffectToApply::ESETA_Float", (int64)ESideEffectToApply::ESETA_Float },
		{ "ESideEffectToApply::ESETA_Visible", (int64)ESideEffectToApply::ESETA_Visible },
		{ "ESideEffectToApply::ESETA_Clear", (int64)ESideEffectToApply::ESETA_Clear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrangeSideEffects,
	nullptr,
	"ESideEffectToApply",
	"ESideEffectToApply",
	Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply()
{
	if (!Z_Registration_Info_UEnum_ESideEffectToApply.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESideEffectToApply.InnerSingleton, Z_Construct_UEnum_StrangeSideEffects_ESideEffectToApply_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESideEffectToApply.InnerSingleton;
}
// End Enum ESideEffectToApply

// Begin Class AStrangeSideEffectsCharacter
void AStrangeSideEffectsCharacter::StaticRegisterNativesAStrangeSideEffectsCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStrangeSideEffectsCharacter);
UClass* Z_Construct_UClass_AStrangeSideEffectsCharacter_NoRegister()
{
	return AStrangeSideEffectsCharacter::StaticClass();
}
struct Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StrangeSideEffectsCharacter.h" },
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getting Small Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getting Small Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Increasing Speed Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increasing Speed Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Increasing Speed Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increasing Speed Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Showing Invisible Actors Input Action */" },
#endif
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Showing Invisible Actors Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrinkingMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "StrangeSideEffectsCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibilityAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrinkingMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrangeSideEffectsCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_SmallAction = { "SmallAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, SmallAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallAction_MetaData), NewProp_SmallAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_SpeedAction = { "SpeedAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, SpeedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedAction_MetaData), NewProp_SpeedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_FloatAction = { "FloatAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, FloatAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatAction_MetaData), NewProp_FloatAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_VisibilityAction = { "VisibilityAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, VisibilityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityAction_MetaData), NewProp_VisibilityAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_DrinkingMontage = { "DrinkingMontage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrangeSideEffectsCharacter, DrinkingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrinkingMontage_MetaData), NewProp_DrinkingMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_SmallAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_SpeedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_FloatAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_VisibilityAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::NewProp_DrinkingMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_StrangeSideEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::ClassParams = {
	&AStrangeSideEffectsCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStrangeSideEffectsCharacter()
{
	if (!Z_Registration_Info_UClass_AStrangeSideEffectsCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStrangeSideEffectsCharacter.OuterSingleton, Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStrangeSideEffectsCharacter.OuterSingleton;
}
template<> STRANGESIDEEFFECTS_API UClass* StaticClass<AStrangeSideEffectsCharacter>()
{
	return AStrangeSideEffectsCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStrangeSideEffectsCharacter);
AStrangeSideEffectsCharacter::~AStrangeSideEffectsCharacter() {}
// End Class AStrangeSideEffectsCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESideEffectToApply_StaticEnum, TEXT("ESideEffectToApply"), &Z_Registration_Info_UEnum_ESideEffectToApply, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1590783964U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStrangeSideEffectsCharacter, AStrangeSideEffectsCharacter::StaticClass, TEXT("AStrangeSideEffectsCharacter"), &Z_Registration_Info_UClass_AStrangeSideEffectsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStrangeSideEffectsCharacter), 377954168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_3801013388(TEXT("/Script/StrangeSideEffects"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
