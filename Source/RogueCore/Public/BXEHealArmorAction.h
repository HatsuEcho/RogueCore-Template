#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEHealArmorAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBXEHealArmorAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPercent;

    UBXEHealArmorAction();

};

