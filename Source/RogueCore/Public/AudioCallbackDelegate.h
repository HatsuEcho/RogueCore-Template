#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "AudioCallbackDelegate.generated.h"

class APlayerCharacter;
class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAudioCallback, APlayerCharacter*, Player, UAudioComponent*, Audio);

