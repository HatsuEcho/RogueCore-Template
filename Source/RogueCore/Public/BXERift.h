#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BXERift.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ABXERift : public AActor {
    GENERATED_BODY()
public:
    ABXERift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDetonatorFailSafe();
    
};

