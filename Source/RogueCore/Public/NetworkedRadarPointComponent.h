#pragma once
#include "CoreMinimal.h"
#include "RadarPointComponent.h"
#include "NetworkedRadarPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UNetworkedRadarPointComponent : public URadarPointComponent {
    GENERATED_BODY()
public:
    UNetworkedRadarPointComponent(const FObjectInitializer& ObjectInitializer);

};

