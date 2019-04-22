#pragma once

#include "Components/ActorComponent.h"
#include "FlashLightComponent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UDSFlashLightComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDSFlashLightComponent(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Animation)
	float BatteryCapcaity = 120.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Animation)
	float RemainingTime = 0.0f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Animation)
	bool bIsFlashLightActive = false;

	UFUNCTION(BlueprintCallable)
	void DecreaseRemainingTime(float deltaTime);

	UFUNCTION(BlueprintCallable)
	void ToggleFlashLight();

	UFUNCTION(BlueprintCallable)
	void RechargeBattery();

};
