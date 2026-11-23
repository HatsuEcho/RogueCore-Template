#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPosMarker.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ASpawnPosMarker : public AActor {
    GENERATED_BODY()
public:
    ASpawnPosMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibility(bool visible);
    
};

