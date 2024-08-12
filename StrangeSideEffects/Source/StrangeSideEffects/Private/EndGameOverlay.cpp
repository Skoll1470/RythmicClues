// Fill out your copyright notice in the Description page of Project Settings.


#include "EndGameOverlay.h"
#include "Components/TextBlock.h"

void UEndGameOverlay::SetTimerText(int32 Minutes, int32 Seconds)
{
	FString String = FString::Printf(TEXT("%d : %d"), Minutes, Seconds);
	FText NewText = FText::FromString(String);
	TimerText->SetText(NewText);
}
