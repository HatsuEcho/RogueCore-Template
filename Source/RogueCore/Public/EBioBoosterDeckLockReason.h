#pragma once
#include "CoreMinimal.h"
#include "EBioBoosterDeckLockReason.generated.h"

UENUM(BlueprintType)
enum class EBioBoosterDeckLockReason : uint8 {
    None,
    CharacterLevel,
    Ascension,
    ForeignDeckLimit,
    Unavailable,
};

