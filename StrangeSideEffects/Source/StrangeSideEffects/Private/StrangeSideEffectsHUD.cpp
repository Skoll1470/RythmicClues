// Fill out your copyright notice in the Description page of Project Settings.


#include "StrangeSideEffectsHUD.h"
#include "StrangeSideEffectsOverlay.h"
#include "Kismet/GameplayStatics.h"
#include "StrangeSideEffects/StrangeSideEffectsCharacter.h"
#include "StrangeSideEffects/Public/Pickup.h"
#include "StrangeSideEffects/Public/EndGameOverlay.h"

void AStrangeSideEffectsHUD::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && SideEffectsOverlayClass)
		{
			SideEffectsOverlay = CreateWidget<UStrangeSideEffectsOverlay>(Controller, SideEffectsOverlayClass);
			SideEffectsOverlay->AddToViewport();
			SideEffectsOverlay->ShowSmall(false);
			SideEffectsOverlay->ShowSpeed(false);
			SideEffectsOverlay->ShowFloat(false);
			SideEffectsOverlay->ShowVisiblity(false);
		}
		if (PauseOverlayClass)
		{
			PauseOverlay = CreateWidget<UUserWidget>(Controller, PauseOverlayClass);
			PauseOverlay->AddToViewport();
			PauseOverlay->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), AStrangeSideEffectsCharacter::StaticClass());
	PlayerCharacter = Cast<AStrangeSideEffectsCharacter>(FoundActor);
	GetWorldTimerManager().SetTimer(THTimer, this, &AStrangeSideEffectsHUD::TimerCountdown, 1.0f, true, 1.0f);

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APickup::StaticClass(), FoundActors);
	SideEffectsOverlay->SetMaxPickupCount(FoundActors.Num());
	SideEffectsOverlay->UpdatePickupCount(0);
}

void AStrangeSideEffectsHUD::SmallCountdown()
{
	if (SmallTime > 0)
	{
		SmallTime--;
		SideEffectsOverlay->UpdateSmallTime(SmallTime);
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
		SideEffectsOverlay->UpdateSpeedTime(SpeedTime);
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
		SideEffectsOverlay->UpdateFloatTime(FloatTime);
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
		SideEffectsOverlay->UpdateVisibilityTime(VisibilityTime);
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
	SideEffectsOverlay->UpdateTimer(TimerMinutes, TimerSeconds);
}

void AStrangeSideEffectsHUD::StartSmallTimer()
{
	SideEffectsOverlay->ShowSmall(true);
	GetWorldTimerManager().SetTimer(THSmall, this, &AStrangeSideEffectsHUD::SmallCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StartSpeedTimer()
{
	SideEffectsOverlay->ShowSpeed(true);
	GetWorldTimerManager().SetTimer(THSpeed, this, &AStrangeSideEffectsHUD::SpeedCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StartFloatTimer()
{
	SideEffectsOverlay->ShowFloat(true);
	GetWorldTimerManager().SetTimer(THFloat, this, &AStrangeSideEffectsHUD::FloatCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StartVisibilityTimer()
{
	SideEffectsOverlay->ShowVisiblity(true);
	GetWorldTimerManager().SetTimer(THVisibility, this, &AStrangeSideEffectsHUD::VisibilityCountdown, 1.0f, true, 1.0f);
}

void AStrangeSideEffectsHUD::StopSmallTimer()
{
	GetWorldTimerManager().ClearTimer(THSmall);
	SideEffectsOverlay->ShowSmall(false);
	SideEffectsOverlay->UpdateSmallTime(30);
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
	SideEffectsOverlay->ShowSpeed(false);
	SideEffectsOverlay->UpdateSpeedTime(30);
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
	SideEffectsOverlay->ShowFloat(false);
	SideEffectsOverlay->UpdateFloatTime(30);
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
	SideEffectsOverlay->ShowVisiblity(false);
	SideEffectsOverlay->UpdateVisibilityTime(30);
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
	SideEffectsOverlay->UpdatePickupCount(NewPickupCount);
}

bool AStrangeSideEffectsHUD::HasAllPikcups(int32 PickupCount)
{
	return PickupCount >= SideEffectsOverlay->GetMaxPickupCount();
}

void AStrangeSideEffectsHUD::SwitchToEndGameOverlay()
{
	GetWorldTimerManager().ClearTimer(THTimer);
	
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && EndGameOverlayClass)
		{
			EndGameOverlay = CreateWidget<UEndGameOverlay>(Controller, EndGameOverlayClass);
			EndGameOverlay->AddToViewport();
			EndGameOverlay->SetTimerText(TimerMinutes, TimerSeconds);
		}
	}
}

void AStrangeSideEffectsHUD::Pause()
{
	PauseOverlay->SetVisibility(ESlateVisibility::Visible);
}
