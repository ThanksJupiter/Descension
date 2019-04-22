#include "DSAnimationInstance.h"
#include "DescensionCharacter.h"
#include "Kismet/KismetMathLibrary.h"

UDSAnimationInstance::UDSAnimationInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UDSAnimationInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	OwnerPawn = TryGetPawnOwner();
	OwnerPlayer = Cast<ADescensionCharacter>(OwnerPawn);

	if (OwnerPlayer)
	{
		OwnerPlayer->OnJumpedDelegate.Clear();
		OwnerPlayer->LandedDelegate.Clear();
		OwnerPlayer->OnStoppedJumpDelegate.Clear();

		OwnerPlayer->OnJumpedDelegate.AddDynamic(this, &UDSAnimationInstance::OnJump);
		OwnerPlayer->LandedDelegate.AddDynamic(this, &UDSAnimationInstance::OnLanded);
		OwnerPlayer->OnStoppedJumpDelegate.AddDynamic(this, &UDSAnimationInstance::OnStopJump);
	}
}

void UDSAnimationInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!OwnerPawn)
		return;

	FVector Velocity = OwnerPawn->GetVelocity();
	FRotator Rotation = OwnerPawn->GetActorRotation();

	Speed = Velocity.Size();
	Direction = CalculateDirection(Velocity, Rotation);

	if (OwnerPlayer)
		SetAimRotation(DeltaSeconds, Rotation);
}

void UDSAnimationInstance::SetAimRotation(float DeltaSeconds, const FRotator& Rotation)
{
	FRotator CharacterAimRotator;

	/*if (OwnerCharacter->TargetSelectionComp->CurrentTarget)
	{
		if (OwnerCharacter->CombatComp->CurrentTarget && OwnerCharacter->TargetSelectionComp->CurrentTarget != OwnerCharacter)
		{
			FVector CharacterAimDirection = OwnerCharacter->TargetSelectionComp->CurrentTarget->GetActorLocation() - OwnerCharacter->GetActorLocation();

			if (OwnerCharacter->CombatComp->CurrentBodyPartTarget != EFGBodyPart::BP_Default)
			{
				CharacterAimDirection = OwnerCharacter->CombatComp->CurrentTarget->GetBodyPartLocation(
					OwnerCharacter->CombatComp->CurrentBodyPartTarget) - OwnerCharacter->GetActorLocation();
			}

			CharacterAimRotator = CharacterAimDirection.ToOrientationRotator();
		}

		else if (OwnerCharacter->TargetSelectionComp->CurrentTarget == OwnerCharacter)
		{
			CharacterAimRotator = OwnerCharacter->GetActorForwardVector().Rotation();
		} else
		{
			CharacterAimRotator = OwnerCharacter->GetActorForwardVector().Rotation();
		}
	} else
	{
	}*/

	CharacterAimRotator = OwnerPlayer->LookDirection.Rotation();

	float CharacterAimYaw = CharacterAimRotator.Yaw;
	float CharacterAimPitch = CharacterAimRotator.Pitch;

	FRotator TargetAimRotator = FRotator(CharacterAimPitch, CharacterAimYaw, 0);
	FRotator CurrentAimRotator = FRotator(AimPitch, AimYaw, 0);

	FRotator DeltaRotator = UKismetMathLibrary::NormalizedDeltaRotator(TargetAimRotator, Rotation);

	//float RotateSpeed;
/*
	if (OwnerPlayer->IsInitialized())
	{
		RotateSpeed = OwnerPlayer->GetAimSpeed();
	} else
	{
		RotateSpeed = 15.0f;
	}*/

	// TODO remove magic number
	FRotator RInterpRotator = UKismetMathLibrary::RInterpTo(CurrentAimRotator, DeltaRotator, DeltaSeconds, 10.0f);
	UKismetMathLibrary::ClampAngle(AimPitch, -90, 90);
	UKismetMathLibrary::ClampAngle(AimYaw, -90, 90);

	AimPitch = RInterpRotator.Pitch;
	AimYaw = RInterpRotator.Yaw;
}

void UDSAnimationInstance::OnJump()
{
	bEnableJump = true;
}

void UDSAnimationInstance::OnStopJump()
{
	bEnableJump = false;
}

void UDSAnimationInstance::OnLanded(const FHitResult& Hit)
{
	bEnableJump = false;
}
