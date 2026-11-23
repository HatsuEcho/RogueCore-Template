#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "AbilityUpgradesUnlockAction.generated.h"

class UAbilityUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UAbilityUpgradesUnlockAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityUpgrade* upgrade;

    UAbilityUpgradesUnlockAction();

};

