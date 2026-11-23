#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "CooperUnlockRecordEntry.generated.h"

USTRUCT(BlueprintType)
struct FCooperUnlockRecordEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Applied;
    
    ROGUECORE_API FCooperUnlockRecordEntry();
};

