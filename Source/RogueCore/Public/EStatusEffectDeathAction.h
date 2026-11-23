#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectDeathAction.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectDeathAction : uint8 {
    Pop,
    Keep,
};

