#pragma once
#include "CoreMinimal.h"
#include "EUnlockType.h"
#include "IntelChallenge.h"
#include "IntelChallengeForUpgrade.generated.h"

class UBXEUnlockBase;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UIntelChallengeForUpgrade : public UIntelChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockType RequiredType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCollectionOverMultipleRuns;

    UIntelChallengeForUpgrade();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelUp(const int32 Level, const TArray<UBXEUnlockBase*>& Unlocks);
    
};

