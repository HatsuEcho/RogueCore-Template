#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "RunSnapshotUnlockRef.h"
#include "RunSnapshotCooper.generated.h"

USTRUCT(BlueprintType)
struct FRunSnapshotCooper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockInstance> Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRunSnapshotUnlockRef> UnlockRefs;
    
    ROGUECORE_API FRunSnapshotCooper();
};

