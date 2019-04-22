#include "FlashLightComponent.h"

UDSFlashLightComponent::UDSFlashLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	RechargeBattery();
}

void UDSFlashLightComponent::DecreaseRemainingTime(float DeltaTime)
{
	if (bIsFlashLightActive) {
		
		RemainingTime -= DeltaTime;
		
		if (RemainingTime <= 0.01f) {		
			bIsFlashLightActive = false;
		}
	}
}

bool UDSFlashLightComponent::ToggleFlashLight()
{ 
	bIsFlashLightActive = !bIsFlashLightActive;
	return bIsFlashLightActive;
}

void UDSFlashLightComponent::RechargeBattery()
{
	RemainingTime = BatteryCapcaity;
}