#pragma once
#include "CoreMinimal.h"
#include "BXEAttributeUnlockAction.h"
#include "ItemUpgradeUnlockAction.generated.h"

class UItemUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UItemUpgradeUnlockAction : public UBXEAttributeUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UItemUpgrade> Attribute;

    UItemUpgradeUnlockAction();

};

