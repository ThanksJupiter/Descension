#pragma once

#include "GameFramework/Actor.h"
#include "DSCamera.generated.h"

UCLASS()
class ADSCamera : public AActor
{
	GENERATED_BODY()
public:
	ADSCamera(const FObjectInitializer& ObjectInitializer);
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm = nullptr;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera = nullptr;
	UPROPERTY(EditDefaultsOnly, Category = Debug)
	bool bDrawDebug = false;
	UPROPERTY(EditDefaultsOnly, Category = "Vertical Movement")
	bool bAdjustHeightOnLanding = true;
	UPROPERTY(EditDefaultsOnly, Category = "Vertical Movement")
	float CameraZOffset = 150.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Vertical Movement")
	float VerticalMoveSpeed = 1.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Vertical Movement")
	float IncreaseSpeedZThreshold = 40.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Vertical Movement")
	float VerticalMoveSpeedIncreaseMultiplier = 2.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Horizontal Movement")
	float HorizontalMoveSpeed = 1.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Vertical Movement")
	float MaximumVerticalOffset = 150.0f;

	UFUNCTION(BlueprintCallable)
	void Initialize(class ADescensionCharacter* PlayerOne, class ADescensionCharacter* PlayerTwo = nullptr);
	UFUNCTION(BlueprintCallable)
	void Update(float DeltaSeconds);
	UFUNCTION()
	void ToggleUpdateZOffset();
private:
	float XAxisLock = -510.0f;
	float ZLerpAlpha = 0.0f;
	float CurrentLowestZ = 0.0f;

	UPROPERTY()
	ADescensionCharacter* PlayerOne = nullptr;
	UPROPERTY()
	ADescensionCharacter* PlayerTwo = nullptr;

	UPROPERTY()
	FVector FirstPos;
	UPROPERTY()
	FVector SecondPos;

	void UpdateVerticalPosition(float DeltaSeconds, FVector& OutLocation, float NewHeight);
	void UpdateHorizontalPosition(float DeltaSeconds, FVector& OutLocation, float NewPositionY);

	void AccomodateFastFallers();
	float TmpVerticalMoveSpeed;
	float IncreasedCameraSpeed;
};