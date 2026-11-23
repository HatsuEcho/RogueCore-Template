#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "ECooperUpgrades.h"
#include "SoloDroneUnlockAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USoloDroneUnlockAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECooperUpgrades Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    USoloDroneUnlockAction();

};

