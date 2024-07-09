// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StrangeSideEffectsHUD.generated.h"

class UStrangeSideEffectsOverlay;
class AStrangeSideEffectsCharacter;

UCLASS()
class STRANGESIDEEFFECTS_API AStrangeSideEffectsHUD : public AHUD
{
	GENERATED_BODY()

public:

	void StartSmallTimer();

	void StartSpeedTimer();

	void StartFloatTimer();

	void StartVisibilityTimer();

	void StopSmallTimer();

	void StopSpeedTimer();

	void StopFloatTimer();

	void StopVisibilityTimer();

protected:

	virtual void BeginPlay() override;
	
private:

	void SmallCountdown();

	void SpeedCountdown();

	void FloatCountdown();

	void VisibilityCountdown();

	void TimerCountdown();

	UPROPERTY(EditDefaultsOnly, Category = Overlay)
	TSubclassOf<UStrangeSideEffectsOverlay> OverlayClass;

	UStrangeSideEffectsOverlay* Overlay = nullptr;

	int32 SmallTime = 30;

	int32 SpeedTime = 30;

	int32 FloatTime = 30;

	int32 VisibilityTime = 30;

	int32 TimerMinutes = 0;

	int32 TimerSeconds = 0;

	FTimerHandle THSmall;

	FTimerHandle THSpeed;

	FTimerHandle THFloat;

	FTimerHandle THVisibility;

	FTimerHandle THTimer;

	AStrangeSideEffectsCharacter* PlayerCharacter = nullptr;
};
