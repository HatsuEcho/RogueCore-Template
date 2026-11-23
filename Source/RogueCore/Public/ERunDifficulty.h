#pragma once
#include "CoreMinimal.h"
#include "ERunDifficulty.generated.h"

UENUM(BlueprintType)
enum class ERunDifficulty : uint8 {
    None,
    Normal,
    Elite,
};

