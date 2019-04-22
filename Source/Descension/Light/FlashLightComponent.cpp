#include "FlashLightComponent.h"

UDSFlashLightComponent::UDSFlashLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bIsFlashLightActive = false;
	RechargeBattery();
}

void UDSFlashLightComponent::DecreaseRemainingTime(float DeltaTime)
{
	if (bIsFlashLightActive) {
		
		RemainingTime -= DeltaTime;
		
		if (RemainingTime <= 0.01f) {		
			ToggleFlashLight();
		}
	}
}

bool UDSFlashLightComponent::ToggleFlashLight(bool setActive = false)
{ 
	if (RemainingTime <= 0.01f)
		return setActive;
	
	setActive = !bIsFlashLightActive;
	return setActive;
}

void UDSFlashLightComponent::RechargeBattery()
{
	RemainingTime = BatteryCapcaity;
}