#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FlyingEnemyDeepPathfinderCharacter.h"
#include "Plover.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API APlover : public AFlyingEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    APlover(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

