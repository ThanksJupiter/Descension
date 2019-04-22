#pragma once

#include "Components/ActorComponent.h"
#include "FlashLightComponent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UDSFlashLightComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDSFlashLightComponent(const FObjectInitializer& ObjectInitializer);
	
	
};
