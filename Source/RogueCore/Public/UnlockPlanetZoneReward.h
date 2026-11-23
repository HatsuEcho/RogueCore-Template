#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockPlanetZoneReward.generated.h"

class UPlanetZone;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUnlockPlanetZoneReward : public UUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* ZoneToUnlock;

    UUnlockPlanetZoneReward();

};

