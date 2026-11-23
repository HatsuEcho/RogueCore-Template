#pragma once
#include "CoreMinimal.h"
#include "EGeneratorType.generated.h"

UENUM(BlueprintType)
enum class EGeneratorType : uint8 {
    Normal,
    Cogs,
    Growths,
};

