#pragma once
#include "CoreMinimal.h"
#include "EPickaxePart.generated.h"

UENUM(BlueprintType, meta=(ScriptName="PickaxePartType"))
enum class EPickaxePart : uint8 {
    Head,
    Blade,
    Shaft,
    Handle,
    Pommel,
    Material,
};

