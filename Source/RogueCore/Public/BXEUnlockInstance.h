#pragma once
#include "CoreMinimal.h"
#include "BXEBundledUnlockInstance.h"
#include "BXEUnlockInstance.generated.h"

class UBXEAttributeUnlock;
class UBXEUnlockBase;
class UBXEUnlockRarity;
class UUnlockVisualSettings;

USTRUCT(BlueprintType)
struct FBXEUnlockInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* UsedRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlock*> AttributeUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUnlockVisualSettings* VisualSettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NegotiationID;
    
    ROGUECORE_API FBXEUnlockInstance();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBXEBundledUnlockInstance> BundledUnlocks;

};

