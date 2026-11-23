#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CoreSpawnEnemyBase.h"
#include "SpawnLordMoth.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ASpawnLordMoth : public ACoreSpawnEnemyBase {
    GENERATED_BODY()
public:
    ASpawnLordMoth(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

