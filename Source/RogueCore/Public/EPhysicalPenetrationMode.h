#pragma once
#include "CoreMinimal.h"
#include "EPhysicalPenetrationMode.generated.h"

UENUM(BlueprintType)
enum class EPhysicalPenetrationMode : uint8 {
    None,
    AlwaysPenetrate,
    AlwaysPenetrateAndHit,
    OneSidedPenetrate,
};

