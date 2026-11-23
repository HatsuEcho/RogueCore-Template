#pragma once
#include "CoreMinimal.h"
#include "EBossFightStage.h"
#include "BossFightState.generated.h"

USTRUCT(BlueprintType)
struct FBossFightState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossFightStage Stage;
    
    ROGUECORE_API FBossFightState();
};

