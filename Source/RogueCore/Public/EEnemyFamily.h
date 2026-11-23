#pragma once
#include "CoreMinimal.h"
#include "EEnemyFamily.generated.h"

UENUM(BlueprintType, meta=(ScriptName="EnemyFamilyType"))
enum class EEnemyFamily : uint8 {
    CoreSpawn,
    Glyphid,
    Mactera,
    Naedocyte,
    Qronar,
    Xynarch,
    Nayaka,
    Deeptora,
    Korlok,
    Automaton,
    Unknown,
    RivalTech,
    Lithophage,
    Native,
    Rafkan,
    Krizzok,
    Gatekeeper,
    Shatterclaw,
};

