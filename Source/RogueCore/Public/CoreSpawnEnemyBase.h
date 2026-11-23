#pragma once
#include "CoreMinimal.h"
#include "Perception/PawnSensingComponent.h"
#include "GameplayTagContainer.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "CoreSpawnEnemyBase.generated.h"

class UDeathFXComponent;
class UEnemyComponent;
class UHitReactionComponent;
class UOutlineComponent;
class UPawnAlertComponent;
class UPawnSensingComponent;
class UPawnStatsComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ACoreSpawnEnemyBase : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LimitRagdollSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRagdollSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;

    // Keep the reflected type for existing Blueprint component references.
    PRAGMA_DISABLE_DEPRECATION_WARNINGS
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    PRAGMA_ENABLE_DEPRECATION_WARNINGS

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyComponent* Enemy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* Outline;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnAlertComponent* PawnAlert;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeathFXComponent* Death;

    ACoreSpawnEnemyBase(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ExternalInvulnerabilityChanged(bool invulnerable);

};

