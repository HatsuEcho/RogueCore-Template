#pragma once
#include "CoreMinimal.h"
#include "IntelChallenge.h"
#include "IntelChallengeNeutralizeEnemyTypes.generated.h"

class UEnemyID;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UIntelChallengeNeutralizeEnemyTypes : public UIntelChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyID*> BannedEnemyIds;

    UIntelChallengeNeutralizeEnemyTypes();

};

