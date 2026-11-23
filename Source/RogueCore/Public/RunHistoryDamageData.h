#pragma once
#include "CoreMinimal.h"
#include "CharacterDamageData.h"
#include "RunHistoryDamageData.generated.h"

USTRUCT(BlueprintType)
struct FRunHistoryDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterDamageData> DamageData;
    
    FRunHistoryDamageData();
};

