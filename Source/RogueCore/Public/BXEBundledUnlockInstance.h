#pragma once
#include "CoreMinimal.h"
#include "BXEBundledUnlockInstance.generated.h"

class UBXEAttributeUnlock;
class UBXEUnlockBase;
class UBXEUnlockRarity;

USTRUCT(BlueprintType)
struct FBXEBundledUnlockInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* UsedRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlock*> AttributeUnlocks;
    
    ROGUECORE_API FBXEBundledUnlockInstance();
};

