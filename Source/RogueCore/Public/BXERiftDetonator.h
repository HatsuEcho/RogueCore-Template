#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BXERiftDetonator.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ABXERiftDetonator : public AActor {
    GENERATED_BODY()
public:
    ABXERiftDetonator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWiresMerged();
    
};

