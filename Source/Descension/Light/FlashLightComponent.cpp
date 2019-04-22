#include "FlashLightComponent.h"

UDSFlashLightComponent::UDSFlashLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	RechargeBattery();
}

void UDSFlashLightComponent::DecreaseRemainingTime(float deltaTime)
{
	if (bIsFlashLightActive) {
		RemainingTime -= deltaTime;
	}
}

void UDSFlashLightComponent::ToggleFlashLight()
{
	bIsFlashLightActive = !bIsFlashLightActive;
}

void UDSFlashLightComponent::RechargeBattery()
{
	RemainingTime = BatteryCapcaity;
}