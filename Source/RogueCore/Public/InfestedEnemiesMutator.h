#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "InfestedEnemiesMutator.generated.h"

class AFSDPawn;
class UFXSystemAsset;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UInfestedEnemiesMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> SpawnEffects;

    UInfestedEnemiesMutator();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemAsset* GetParticleSystem(AFSDPawn* Enemy) const;
    
};

