// Fill out your copyright notice in the Description page of Project Settings.


#include "StrangeSideEffectsHUD.h"
#include "StrangeSideEffectsOverlay.h"
#include "Kismet/GameplayStatics.h"
#include "StrangeSideEffects/StrangeSideEffectsCharacter.h"

void AStrangeSideEffectsHUD::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && OverlayClass)
		{
			Overlay = CreateWidget<UStrangeSideEffectsOverlay>(Controller, OverlayClass);
			Overlay->AddToViewport();
			Overlay->ShowSmall(false);
			Overlay->ShowSpeed(false);
			Overlay->ShowFloat(false);
			Overlay->ShowVisiblity(false);
		}
	}
	AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), AStrangeSideEffectsCharacter::StaticClass());
	PlayerCharacter = Cast<AStrangeSideEffectsCharacter>(FoundActor);
	GetWorldTimerManager().SetTimer(THTimer, this, &AStrangeSideEffectsHUD::TimerCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::SmallCountdown()
{
	if (SmallTime > 0)
	{
		SmallTime--;
		Overlay->UpdateSmallTime(SmallTime);
	}
	else
	{
		StopSmallTimer();
	}
}

void AStrangeSideEffectsHUD::SpeedCountdown()
{
	if (SpeedTime > 0)
	{
		SpeedTime--;
		Overlay->UpdateSpeedTime(SpeedTime);
	}
	else
	{
		StopSpeedTimer();
	}
}

void AStrangeSideEffectsHUD::FloatCountdown()
{
	if (FloatTime > 0)
	{
		FloatTime--;
		Overlay->UpdateFloatTime(FloatTime);
	}
	else
	{
		StopFloatTimer();
	}
}

void AStrangeSideEffectsHUD::VisibilityCountdown()
{
	if (VisibilityTime > 0)
	{
		VisibilityTime--;
		Overlay->UpdateVisibilityTime(VisibilityTime);
	}
	else
	{
		StopVisibilityTimer();
	}
}

void AStrangeSideEffectsHUD::TimerCountdown()
{
	if (TimerSeconds < 59)
	{
		TimerSeconds++;
	}
	else
	{
		TimerSeconds = 0;
		TimerMinutes++;
	}
	Overlay->UpdateTimer(TimerMinutes, TimerSeconds);
}

void AStrangeSideEffectsHUD::StartSmallTimer()
{
	Overlay->ShowSmall(true);
	GetWorldTimerManager().SetTimer(THSmall, this, &AStrangeSideEffectsHUD::SmallCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StartSpeedTimer()
{
	Overlay->ShowSpeed(true);
	GetWorldTimerManager().SetTimer(THSpeed, this, &AStrangeSideEffectsHUD::SpeedCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StartFloatTimer()
{
	Overlay->ShowFloat(true);
	GetWorldTimerManager().SetTimer(THFloat, this, &AStrangeSideEffectsHUD::FloatCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StartVisibilityTimer()
{
	Overlay->ShowVisiblity(true);
	GetWorldTimerManager().SetTimer(THVisibility, this, &AStrangeSideEffectsHUD::VisibilityCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StopSmallTimer()
{
	GetWorldTimerManager().ClearTimer(THSmall);
	Overlay->ShowSmall(false);
	Overlay->UpdateSmallTime(30);
	SmallTime = 30;
	if (PlayerCharacter)
	{
		if (PlayerCharacter->GetIsSmall())
		{
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Small);
			PlayerCharacter->ApplySideEffect();
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Clear);
		}
	}
}

void AStrangeSideEffectsHUD::StopSpeedTimer()
{
	GetWorldTimerManager().ClearTimer(THSpeed);
	Overlay->ShowSpeed(false);
	Overlay->UpdateSpeedTime(30);
	SpeedTime = 30;
	if (PlayerCharacter)
	{
		if (PlayerCharacter->GetIsSpeed())
		{
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Speed);
			PlayerCharacter->ApplySideEffect();
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Clear);
		}
	}
}

void AStrangeSideEffectsHUD::StopFloatTimer()
{
	GetWorldTimerManager().ClearTimer(THFloat);
	Overlay->ShowFloat(false);
	Overlay->UpdateFloatTime(30);
	FloatTime = 30;
	if (PlayerCharacter)
	{
		if (PlayerCharacter->GetIsFloating())
		{
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Float);
			PlayerCharacter->ApplySideEffect();
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Clear);
		}
	}
}

void AStrangeSideEffectsHUD::StopVisibilityTimer()
{
	GetWorldTimerManager().ClearTimer(THVisibility);
	Overlay->ShowVisiblity(false);
	Overlay->UpdateVisibilityTime(30);
	VisibilityTime = 30;
	if (PlayerCharacter)
	{
		if (PlayerCharacter->GetIsSeeingInvisible())
		{
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Visible);
			PlayerCharacter->ApplySideEffect();
			PlayerCharacter->SetEnumSideEffectToApply(ESideEffectToApply::ESETA_Clear);
		}
	}
}

void AStrangeSideEffectsHUD::UpdatePickupCount(int32 NewPickupCount)
{
	Overlay->UpdatePickupCount(NewPickupCount);
}
