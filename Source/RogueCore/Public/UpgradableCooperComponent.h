#pragma once
#include "CoreMinimal.h"
#include "UpgradableGearComponent.h"
#include "UpgradableCooperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UUpgradableCooperComponent : public UUpgradableGearComponent {
    GENERATED_BODY()
public:
    UUpgradableCooperComponent(const FObjectInitializer& ObjectInitializer);

};

