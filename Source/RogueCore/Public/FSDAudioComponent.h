#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "FSDAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFSDAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UFSDAudioComponent(const FObjectInitializer& ObjectInitializer);

};

