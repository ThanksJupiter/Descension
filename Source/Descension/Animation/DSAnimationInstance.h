#pragma once

#include "Animation/AnimInstance.h"
#include "DSAnimationInstance.generated.h"

UCLASS()
class UDSAnimationInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UDSAnimationInstance(const FObjectInitializer& ObjectInitializer);

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	void SetAimRotation(float DeltaSeconds, const FRotator& Rotation);

	UFUNCTION()
	void OnJump();

	UFUNCTION()
	void OnStopJump();

	UFUNCTION()
	void OnLanded(const FHitResult& Hit);

	APawn* OwnerPawn = nullptr;

	class ADescensionCharacter* OwnerPlayer = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Aiming)
		float AimSpeed = 10.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Aiming)
		float AimPitch;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Aiming)
		float AimYaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bEnableJump = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		float Direction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		FVector MovementDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bIsSprinting = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bIsCrouched = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat)
		bool bIsAimingDownSight = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat)
		bool bHasTarget = false;
};
