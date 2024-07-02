// Fill out your copyright notice in the Description page of Project Settings.


#include "ApplySideEffectNotify.h"
#include "StrangeSideEffects/StrangeSideEffectsCharacter.h"
#include "Kismet/GameplayStatics.h"

void UApplySideEffectNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		PlayerCharacter = Cast<AStrangeSideEffectsCharacter>(MeshComp->GetOwner());
		if (PlayerCharacter)
		{
			PlayerCharacter->SetDrinkingState(true);
		}
	}
}

void UApplySideEffectNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		PlayerCharacter = Cast<AStrangeSideEffectsCharacter>(MeshComp->GetOwner());
		if (PlayerCharacter)
		{
			PlayerCharacter->SetDrinkingState(false);
			PlayerCharacter->ApplySideEffect();
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Clear);
		}
	}
}