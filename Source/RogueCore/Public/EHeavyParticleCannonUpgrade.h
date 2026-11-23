#pragma once
#include "CoreMinimal.h"
#include "EHeavyParticleCannonUpgrade.generated.h"

UENUM(BlueprintType, meta=(ScriptName="HeavyParticleCannonUpgradeType"))
enum class EHeavyParticleCannonUpgrade : uint8 {
    ReloadOnButtonRelease,
    BoosterModule,
    KillAddsAmmo,
    RadialDamageIncPerSecond,
    RadialRangeIncPerSecond,
    BulkyBeam,
    ProjectionModule,
    PlatformExplosions,
};

