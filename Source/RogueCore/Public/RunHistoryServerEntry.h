#pragma once
#include "CoreMinimal.h"
#include "CharacterServerBuildData.h"
#include "RunHistoryDamageData.h"
#include "RunHistoryServerEntry.generated.h"

USTRUCT(BlueprintType)
struct FRunHistoryServerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunHistoryDamageData DamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterServerBuildData> ServerBuildData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MissionSuccess;
    
    FRunHistoryServerEntry();
};

