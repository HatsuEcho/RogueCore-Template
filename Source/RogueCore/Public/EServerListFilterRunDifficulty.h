#pragma once
#include "CoreMinimal.h"
#include "EServerListFilterRunDifficulty.generated.h"

UENUM(BlueprintType)
enum class EServerListFilterRunDifficulty : uint8 {
    Any,
    Normal,
    Elite,
};

