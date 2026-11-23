#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "ENumericUpgradeType.h"
#include "NumericalCharacterUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UNumericalCharacterUpgrade : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumericUpgradeType Type;
    
    UNumericalCharacterUpgrade();

};

