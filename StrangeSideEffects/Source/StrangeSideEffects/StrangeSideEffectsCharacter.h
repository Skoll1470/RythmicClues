// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "StrangeSideEffectsCharacter.generated.h"

UENUM(BlueprintType)
enum class ESideEffectToApply : uint8
{
	ESETA_Small UMETA(DisplayName = "Small"),
	ESETA_Speed UMETA(DisplayName = "Speed"),
	ESETA_Float UMETA(DisplayName = "Float"),
	ESETA_Visible UMETA(DisplayName = "Visible"),
	ESETA_Clear UMETA(DisplayName = "Clear")
};

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class UAnimMontage;
class UNiagaraComponent;
class APotionActor;
class AStrangeSideEffectsHUD;


DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AStrangeSideEffectsCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Getting Small Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SmallAction;

	/** Increasing Speed Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SpeedAction;

	/** Increasing Speed Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* FloatAction;

	/** Showing Invisible Actors Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* VisibilityAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* DrinkingMontage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ParticleEffects, meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* SmallEffect = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ParticleEffects, meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* SpeedEffect = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ParticleEffects, meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* FloatEffect = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ParticleEffects, meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* VisibilityEffect = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Potion, meta = (AllowPrivateAccess = "true"))
	UStaticMesh* PotionMesh = nullptr;

public:
	AStrangeSideEffectsCharacter();
	
	//Getter for the IsSeeingInvisible Variable
	bool GetIsSmall();

	bool GetIsSpeed();

	bool GetIsFloating();

	bool GetIsSeeingInvisible();

	void SetDrinkingState(bool NewDrinkingState);

	void ApplySideEffect();

	void SetEnumSideEffectToApply(ESideEffectToApply NewEnum);

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for Getting Small Input*/
	void Small(const FInputActionValue& Value);

	/** Called for Increasing Speed Input*/
	void Speed(const FInputActionValue& Value);

	/** Called for Floating Input*/
	void Float(const FInputActionValue& Value);

	/** Called for Seeing Invisible Input*/
	void Visibility(const FInputActionValue& Value);

	void PlayDrinkingMontage();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

private:

	//Variable indicating if the Player is Small
	bool IsSmall = false;

	//Variable indicating if the Player has increased Speed
	bool IsSpeed = false;

	//Variable indicating if the Player is Floating
	bool IsFloating = false;

	//Variable indicating if the Player is Seeing the Invisible
	bool IsSeeingInvisible = false;

	bool IsDrinking = false;

	ESideEffectToApply EnumSideEffectToApply = ESideEffectToApply::ESETA_Clear;

	APotionActor* PotionActor = nullptr;

	AStrangeSideEffectsHUD* HUD = nullptr;
};

