#pragma once
#include "CoreMinimal.h"
#include "ELoadoutSection.generated.h"

UENUM(BlueprintType)
enum class ELoadoutSection : uint8 {
    None,
    Gear,
    Pickaxe,
    Vanity = 4,
};

