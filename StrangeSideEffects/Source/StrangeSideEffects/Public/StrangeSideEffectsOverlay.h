// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StrangeSideEffectsOverlay.generated.h"

class UTextBlock;
class UImage;

UCLASS()
class STRANGESIDEEFFECTS_API UStrangeSideEffectsOverlay : public UUserWidget
{
	GENERATED_BODY()

public:

	void ShowSmall(bool IsShowing);

	void ShowSpeed(bool IsShowing);

	void ShowFloat(bool IsShowing);

	void ShowVisiblity(bool IsShowing);

	void UpdateSmallTime(int32 NewValue);

	void UpdateSpeedTime(int32 NewValue);

	void UpdateFloatTime(int32 NewValue);

	void UpdateVisibilityTime(int32 NewValue);

	void UpdateTimer(int32 Minutes, int32 Seconds);

private:

	UPROPERTY(meta = (BindWidget))
	UImage* SmallIcon = nullptr;

	UPROPERTY(meta = (BindWidget))
	UImage* SpeedIcon = nullptr;

	UPROPERTY(meta = (BindWidget))
	UImage* FloatIcon = nullptr;

	UPROPERTY(meta = (BindWidget))
	UImage* VisibilityIcon = nullptr;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SmallTime = nullptr;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SpeedTime = nullptr;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* FloatTime = nullptr;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* VisibilityTime = nullptr;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Timer = nullptr;
};
