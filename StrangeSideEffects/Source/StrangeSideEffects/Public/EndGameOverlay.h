// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndGameOverlay.generated.h"

class UTextBlock;

UCLASS()
class STRANGESIDEEFFECTS_API UEndGameOverlay : public UUserWidget
{
	GENERATED_BODY()

public:

	void SetTimerText(int32 Minutes, int32 Seconds);

private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TimerText = nullptr;
	
};
