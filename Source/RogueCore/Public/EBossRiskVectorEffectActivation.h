#pragma once
#include "CoreMinimal.h"
#include "EBossRiskVectorEffectActivation.generated.h"

UENUM(BlueprintType)
enum class EBossRiskVectorEffectActivation : uint8 {
    WholeFight,
    WhileExternallyInvulnerable,
    WhileSignal,
    OnBossHitWhileInvulnerable,
};

