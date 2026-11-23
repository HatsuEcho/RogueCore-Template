#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "MultiTargeter.h"
#include "TerminatorEnemy.generated.h"

class AActor;
class UAnimMontage;
class UHitReactionComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ATerminatorEnemy : public AEnemyDeepPathfinderCharacter, public IMultiTargeter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlairAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFlairAnimCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlairAnimationCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> CurrentTargets;

    ATerminatorEnemy(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayFlairAnimation();
    

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }
};

