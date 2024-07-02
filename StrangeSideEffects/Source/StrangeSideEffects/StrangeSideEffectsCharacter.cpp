// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrangeSideEffectsCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Animation/AnimMontage.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AStrangeSideEffectsCharacter

AStrangeSideEffectsCharacter::AStrangeSideEffectsCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

bool AStrangeSideEffectsCharacter::GetIsSeeingInvisible()
{
	return IsSeeingInvisible;
}

void AStrangeSideEffectsCharacter::SetDrinkingState(bool NewDrinkingState)
{
	IsDrinking = NewDrinkingState;
}

void AStrangeSideEffectsCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AStrangeSideEffectsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AStrangeSideEffectsCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AStrangeSideEffectsCharacter::Look);

		// Small
		EnhancedInputComponent->BindAction(SmallAction, ETriggerEvent::Started, this, &AStrangeSideEffectsCharacter::Small);

		// Speed
		EnhancedInputComponent->BindAction(SpeedAction, ETriggerEvent::Started, this, &AStrangeSideEffectsCharacter::Speed);

		// Float
		EnhancedInputComponent->BindAction(FloatAction, ETriggerEvent::Started, this, &AStrangeSideEffectsCharacter::Float);

		// Visibility
		EnhancedInputComponent->BindAction(VisibilityAction, ETriggerEvent::Started, this, &AStrangeSideEffectsCharacter::Visibility);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AStrangeSideEffectsCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && !IsDrinking)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AStrangeSideEffectsCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AStrangeSideEffectsCharacter::Small(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		PlayDrinkingMontage();
		EnumSideEffectToApply = ESideEffectToApply::ESETA_Small;
	}
}

void AStrangeSideEffectsCharacter::Speed(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		PlayDrinkingMontage();
		EnumSideEffectToApply = ESideEffectToApply::ESETA_Speed;
	}
}

void AStrangeSideEffectsCharacter::Float(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		PlayDrinkingMontage();
		EnumSideEffectToApply = ESideEffectToApply::ESETA_Float;
	}
}

void AStrangeSideEffectsCharacter::Visibility(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		PlayDrinkingMontage();
		EnumSideEffectToApply = ESideEffectToApply::ESETA_Visible;
	}
}

void AStrangeSideEffectsCharacter::ApplySideEffect()
{
	if (EnumSideEffectToApply == ESideEffectToApply::ESETA_Small)
	{
		if (!IsSmall)
		{
			GetCapsuleComponent()->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
			GetMesh()->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
			GetMesh()->SetClothMaxDistanceScale(0.1f);
			CameraBoom->TargetArmLength = 200.0f;
		}
		else
		{
			GetCapsuleComponent()->SetWorldScale3D(FVector(1.0, 1.0f, 1.0f));
			GetMesh()->SetWorldScale3D(FVector(1.0, 1.0f, 1.0f));
			GetMesh()->SetClothMaxDistanceScale(1.0f);
			CameraBoom->TargetArmLength = 400.0f;
		}
		IsSmall = !IsSmall;
	}
	else if (EnumSideEffectToApply == ESideEffectToApply::ESETA_Speed)
	{
		float NewMaxWalkSpeed = !IsSpeed ? 1000.f : 500.f;
		GetCharacterMovement()->MaxWalkSpeed = NewMaxWalkSpeed;
		IsSpeed = !IsSpeed;
	}
	else if (EnumSideEffectToApply == ESideEffectToApply::ESETA_Float)
	{
		float NewGravityScale = !IsFloating ? 0.5f : 1.f;
		GetCharacterMovement()->GravityScale = NewGravityScale;
		IsFloating = !IsFloating;
	}
	else if (EnumSideEffectToApply == ESideEffectToApply::ESETA_Visible)
	{
		IsSeeingInvisible = !IsSeeingInvisible;
	}
}

void AStrangeSideEffectsCharacter::SetEnumSideEffectToApply(ESideEffectToApply NewEnum)
{
	EnumSideEffectToApply = NewEnum;
}

void AStrangeSideEffectsCharacter::PlayDrinkingMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && DrinkingMontage)
	{
		AnimInstance->Montage_Play(DrinkingMontage, 1.f, EMontagePlayReturnType::MontageLength, 0.f, true);
	}
}
