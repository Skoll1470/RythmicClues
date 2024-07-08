// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StrangeSideEffectsCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRANGESIDEEFFECTS_StrangeSideEffectsCharacter_generated_h
#error "StrangeSideEffectsCharacter.generated.h already included, missing '#pragma once' in StrangeSideEffectsCharacter.h"
#endif
#define STRANGESIDEEFFECTS_StrangeSideEffectsCharacter_generated_h

#define FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStrangeSideEffectsCharacter(); \
	friend struct Z_Construct_UClass_AStrangeSideEffectsCharacter_Statics; \
public: \
	DECLARE_CLASS(AStrangeSideEffectsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrangeSideEffects"), NO_API) \
	DECLARE_SERIALIZER(AStrangeSideEffectsCharacter)


#define FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AStrangeSideEffectsCharacter(AStrangeSideEffectsCharacter&&); \
	AStrangeSideEffectsCharacter(const AStrangeSideEffectsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrangeSideEffectsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrangeSideEffectsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStrangeSideEffectsCharacter) \
	NO_API virtual ~AStrangeSideEffectsCharacter();


#define FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_32_PROLOG
#define FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRANGESIDEEFFECTS_API UClass* StaticClass<class AStrangeSideEffectsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_thoma_OneDrive_Bureau_Work_StrangeSideEffect_StrangeSideEffects_Source_StrangeSideEffects_StrangeSideEffectsCharacter_h


#define FOREACH_ENUM_ESIDEEFFECTTOAPPLY(op) \
	op(ESideEffectToApply::ESETA_Small) \
	op(ESideEffectToApply::ESETA_Speed) \
	op(ESideEffectToApply::ESETA_Float) \
	op(ESideEffectToApply::ESETA_Visible) \
	op(ESideEffectToApply::ESETA_Clear) 

enum class ESideEffectToApply : uint8;
template<> struct TIsUEnumClass<ESideEffectToApply> { enum { Value = true }; };
template<> STRANGESIDEEFFECTS_API UEnum* StaticEnum<ESideEffectToApply>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
