#pragma once
#include "CoreMinimal.h"
#include "ESchematicType.generated.h"

UENUM(BlueprintType, meta=(ScriptName="SchematicTypeEnum"))
enum class ESchematicType : uint8 {
    Overclock,
    Vanity,
    Resource,
    Blank,
};

