// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DescensionCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"

//////////////////////////////////////////////////////////////////////////
// ADescensionCharacter

ADescensionCharacter::ADescensionCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ADescensionCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADescensionCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADescensionCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ADescensionCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ADescensionCharacter::LookUpAtRate);

	PlayerInputComponent->BindAxis("LookUpRate", this, &ADescensionCharacter::ManualSetYLook);
	PlayerInputComponent->BindAxis("TurnRate", this, &ADescensionCharacter::ManualSetXLook);
}

void ADescensionCharacter::ManualSetLookDirection(const FVector& LookDir)
{
	LookDirection = LookDir;
}

void ADescensionCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	//AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ADescensionCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	//AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ADescensionCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = FRotator::ZeroRotator;
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ADescensionCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = FRotator::ZeroRotator;
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ADescensionCharacter::ManualSetXLook(float Value)
{
	FVector ControlRot = GetActorForwardVector();
	if (FMath::Abs(Value) > KINDA_SMALL_NUMBER)
	{
		LookPoint = GetActorLocation() + FVector::RightVector * Value * 50.f;
		FVector Direction = LookPoint - GetActorLocation();
		LookDirection.Y = Direction.Y;
		bUseControllerRotationYaw = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;

		ControlRot = FMath::Lerp(GetActorForwardVector(), LookDirection, FApp::GetDeltaTime());
		Controller->SetControlRotation(ControlRot.Rotation());
		RootComponent->bAbsoluteRotation = true;
	} else
	{
		LookPoint = GetActorLocation() + GetActorForwardVector() * 50.f;
		LookDirection.Y = GetActorRotation().Vector().Y;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		RootComponent->bAbsoluteRotation = false;
	}

	DrawDebugSphere(GetWorld(), LookPoint, 50.0f, 32, FColor::Red);
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + ControlRot * 50.f, FColor::Green);
}

void ADescensionCharacter::ManualSetYLook(float Value)
{
	if (FMath::Abs(Value) > KINDA_SMALL_NUMBER)
	{
		LookDirection.Z = -Value;
	} else
	{
		LookDirection.Z = GetActorRotation().Vector().Z;
	}
}

void ADescensionCharacter::Jump()
{
	Super::Jump();
	OnJumpedDelegate.Broadcast();
}

void ADescensionCharacter::StopJumping()
{
	Super::StopJumping();
	OnStoppedJumpDelegate.Broadcast();
}
