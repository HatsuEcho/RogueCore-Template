#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "PlagueWorm.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API APlagueWorm : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    APlagueWorm(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

