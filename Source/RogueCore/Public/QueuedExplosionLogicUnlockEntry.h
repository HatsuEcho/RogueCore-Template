#pragma once
#include "CoreMinimal.h"
#include "QueuedExplosionLogicUnlockDamage.h"
#include "QueuedExplosionLogicUnlockEffects.h"
#include "QueuedExplosionLogicUnlockEntry.generated.h"

USTRUCT(BlueprintType)
struct FQueuedExplosionLogicUnlockEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueuedExplosionLogicUnlockDamage Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueuedExplosionLogicUnlockEffects effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueuedTime;
    
    ROGUECORE_API FQueuedExplosionLogicUnlockEntry();
};

