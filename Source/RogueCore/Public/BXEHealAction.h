#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEHealAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBXEHealAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPercent;

    UBXEHealAction();

};

