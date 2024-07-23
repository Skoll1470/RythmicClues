// Fill out your copyright notice in the Description page of Project Settings.


#include "StrangeSideEffectsOverlay.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void UStrangeSideEffectsOverlay::ShowSmall(bool IsShowing)
{
	if (IsShowing)
	{
		SmallIcon->SetVisibility(ESlateVisibility::Visible);
		SmallTime->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SmallIcon->SetVisibility(ESlateVisibility::Hidden);
		SmallTime->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UStrangeSideEffectsOverlay::ShowSpeed(bool IsShowing)
{
	if (IsShowing)
	{
		SpeedIcon->SetVisibility(ESlateVisibility::Visible);
		SpeedTime->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SpeedIcon->SetVisibility(ESlateVisibility::Hidden);
		SpeedTime->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UStrangeSideEffectsOverlay::ShowFloat(bool IsShowing)
{
	if (IsShowing)
	{
		FloatIcon->SetVisibility(ESlateVisibility::Visible);
		FloatTime->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		FloatIcon->SetVisibility(ESlateVisibility::Hidden);
		FloatTime->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UStrangeSideEffectsOverlay::ShowVisiblity(bool IsShowing)
{
	if (IsShowing)
	{
		VisibilityIcon->SetVisibility(ESlateVisibility::Visible);
		VisibilityTime->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		VisibilityIcon->SetVisibility(ESlateVisibility::Hidden);
		VisibilityTime->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UStrangeSideEffectsOverlay::UpdateSmallTime(int32 NewValue)
{
	FString String = FString::Printf(TEXT("%d"), NewValue);
	FText NewText = FText::FromString(String);
	SmallTime->SetText(NewText);
}

void UStrangeSideEffectsOverlay::UpdateSpeedTime(int32 NewValue)
{
	FString String = FString::Printf(TEXT("%d"), NewValue);
	FText NewText = FText::FromString(String);
	SpeedTime->SetText(NewText);
}

void UStrangeSideEffectsOverlay::UpdateFloatTime(int32 NewValue)
{
	FString String = FString::Printf(TEXT("%d"), NewValue);
	FText NewText = FText::FromString(String);
	FloatTime->SetText(NewText);
}

void UStrangeSideEffectsOverlay::UpdateVisibilityTime(int32 NewValue)
{
	FString String = FString::Printf(TEXT("%d"), NewValue);
	FText NewText = FText::FromString(String);
	VisibilityTime->SetText(NewText);
}

void UStrangeSideEffectsOverlay::UpdateTimer(int32 Minutes, int32 Seconds)
{
	FString String = FString::Printf(TEXT("%d : %d"), Minutes, Seconds);
	FText NewText = FText::FromString(String);
	Timer->SetText(NewText);
}

void UStrangeSideEffectsOverlay::UpdatePickupCount(int32 NewPickupCount)
{
	FString String = FString::Printf(TEXT("%d"), NewPickupCount);
	FText NewText = FText::FromString(String);
	PickupCount->SetText(NewText);
}
