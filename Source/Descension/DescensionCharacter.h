// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DescensionCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDSOnJumpedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDSOnStoppedJumpDelegate);

UCLASS(config=Game)
class ADescensionCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ADescensionCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY()
	FDSOnJumpedDelegate OnJumpedDelegate;

	UPROPERTY()
	FDSOnJumpedDelegate OnStoppedJumpDelegate;

	UPROPERTY(BlueprintReadOnly)
	FVector LookDirection;

	UPROPERTY(BlueprintReadOnly)
	FVector LookPoint;
protected:

	/** Jumping. */
	void Jump() override;
	void StopJumping() override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	UFUNCTION()
	void ManualSetXLook(float Value);

	UFUNCTION()
	void ManualSetYLook(float Value);

	UFUNCTION()
	void ManualSetLookDirection(const FVector& LookDir);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface
};

