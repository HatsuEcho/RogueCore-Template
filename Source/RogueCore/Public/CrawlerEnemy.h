#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CoreSpawnEnemyBase.h"
#include "CrawlerEnemy.generated.h"

class UBallisticMovementComponent;
class UMeleeAttackComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ACrawlerEnemy : public ACoreSpawnEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeleeAttackComponent* MeleeAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBallisticMovementComponent* BallisticMovement;

    ACrawlerEnemy(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

