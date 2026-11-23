#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockCollection.h"
#include "BXEUnlockPoolBundle.generated.h"

class UBXEUnlockBundle;

UCLASS(Blueprintable)
class UBXEUnlockPoolBundle : public UBXEUnlockCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBundle* BundleUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockCollection*> Pools;
    
public:
    UBXEUnlockPoolBundle();

};

