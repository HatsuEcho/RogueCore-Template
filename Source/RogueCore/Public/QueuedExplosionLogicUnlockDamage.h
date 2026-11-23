#pragma once
#include "CoreMinimal.h"
#include "DamageInstance.h"
#include "DamageParams.h"
#include "QueuedExplosionLogicUnlockDamage.generated.h"

USTRUCT(BlueprintType)
struct FQueuedExplosionLogicUnlockDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageParams DamageParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInstance DamageInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmTime;
    
    ROGUECORE_API FQueuedExplosionLogicUnlockDamage();
};

