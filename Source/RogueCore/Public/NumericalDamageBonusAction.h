#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "EDamageUpgrade.h"
#include "NumericalDamageBonusAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UNumericalDamageBonusAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageUpgrade Type;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;

    UNumericalDamageBonusAction();

};

