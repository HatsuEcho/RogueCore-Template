#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "EGuardianGauntletUpgrade.h"
#include "GuardianGauntletUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UGuardianGauntletUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuardianGauntletUpgrade Type;
    
public:
    UGuardianGauntletUpgrade();

};

