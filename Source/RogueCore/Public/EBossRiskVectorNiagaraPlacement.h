#pragma once
#include "CoreMinimal.h"
#include "EBossRiskVectorNiagaraPlacement.generated.h"

UENUM(BlueprintType)
enum class EBossRiskVectorNiagaraPlacement : uint8 {
    AttachedToBoss,
    AtBossSocketInWorld,
};

