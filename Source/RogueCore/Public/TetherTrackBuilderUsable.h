#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderUsable.h"
#include "TetherTrackBuilderUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UTetherTrackBuilderUsable : public UTrackBuilderUsable {
    GENERATED_BODY()
public:
    UTetherTrackBuilderUsable(const FObjectInitializer& ObjectInitializer);

};

