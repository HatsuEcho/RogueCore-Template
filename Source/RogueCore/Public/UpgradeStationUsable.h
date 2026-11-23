#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "UpgradeStationUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UUpgradeStationUsable : public USingleUsableComponent {
    GENERATED_BODY()
public:
    UUpgradeStationUsable(const FObjectInitializer& ObjectInitializer);

};

