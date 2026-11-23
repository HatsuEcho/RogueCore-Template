#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEAmmoUpgradeAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBXEAmmoUpgradeAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoModifier;

    UBXEAmmoUpgradeAction();

};

