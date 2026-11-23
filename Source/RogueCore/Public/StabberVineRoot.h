#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyPawn.h"
#include "StabberVineRoot.generated.h"

class AStabberVine;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AStabberVineRoot : public AEnemyPawn {
    GENERATED_BODY()
public:
    AStabberVineRoot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveVine(AStabberVine* vine);
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

