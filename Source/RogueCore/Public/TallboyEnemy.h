#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyAttacker.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "TallboyEnemy.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ATallboyEnemy : public AEnemyDeepPathfinderCharacter, public IEnemyAttacker {
    GENERATED_BODY()
public:
    ATallboyEnemy(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }
    UFUNCTION(BlueprintCallable)
    float GetAttackDamageModifier() const override PURE_VIRTUAL(GetAttackDamageModifier, return 0.0f;);
    
};

