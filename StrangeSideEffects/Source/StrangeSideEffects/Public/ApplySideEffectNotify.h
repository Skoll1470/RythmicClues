// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ApplySideEffectNotify.generated.h"

class AStrangeSideEffectsCharacter;

UCLASS()
class STRANGESIDEEFFECTS_API UApplySideEffectNotify : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
	AStrangeSideEffectsCharacter* PlayerCharacter = nullptr;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
