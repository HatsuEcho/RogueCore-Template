#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "SkipUnlockInstance.generated.h"

USTRUCT(BlueprintType)
struct FSkipUnlockInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance instance;
    
    ROGUECORE_API FSkipUnlockInstance();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldReplace;

};

