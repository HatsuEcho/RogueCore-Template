#pragma once
#include "CoreMinimal.h"
#include "ERunDepth.h"
#include "IntelChallenge.h"
#include "IntelRunRequirements.h"
#include "IntelChallengeForBossSummon.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UIntelChallengeForBossSummon : public UIntelChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> AllowedBosses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSummonAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RequiredRunDepth;

    UIntelChallengeForBossSummon();

private:
    UFUNCTION(BlueprintCallable)
    void OnBossSummoned(AActor* Boss);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelRunRequirements RunRequirements;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireMutator;

};

