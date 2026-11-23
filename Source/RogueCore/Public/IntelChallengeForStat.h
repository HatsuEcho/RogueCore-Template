#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelRunRequirements.h"
#include "IntelChallengeForStat.generated.h"

class UMissionStat;
class UObject;
class UPlanetZone;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UIntelChallengeForStat : public UIntelChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* RequiredStat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionStat*> ExtraStats;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* RequiredZone;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireMutator;

    UIntelChallengeForStat();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnStatUpdated(UObject* WorldContext, UMissionStat* ChangedStat, float Value, float change);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelRunRequirements RunRequirements;

};

