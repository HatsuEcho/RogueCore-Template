#pragma once
#include "CoreMinimal.h"
#include "UpgradableGearComponent.h"
#include "UpgradableItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UUpgradableItemComponent : public UUpgradableGearComponent {
    GENERATED_BODY()
public:
    UUpgradableItemComponent(const FObjectInitializer& ObjectInitializer);

};

