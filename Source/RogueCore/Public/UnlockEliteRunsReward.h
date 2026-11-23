#pragma once
#include "CoreMinimal.h"
#include "ERunDepth.h"
#include "Reward.h"
#include "UnlockEliteRunsReward.generated.h"

class UPlanetZone;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockEliteRunsReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RunDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlanetZone*> PlanetZones;
    
public:
    UUnlockEliteRunsReward();

};

