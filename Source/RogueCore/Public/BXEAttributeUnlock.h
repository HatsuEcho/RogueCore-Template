#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockGenericBase.h"
#include "BXEAttributeUnlock.generated.h"

class UBXEAttributeUnlockAction;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEAttributeUnlock : public UBXEUnlockGenericBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlockAction*> Unlocks;

    UBXEAttributeUnlock();

};

