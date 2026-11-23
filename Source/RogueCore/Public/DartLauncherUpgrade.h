#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "EDartLauncherUpgradeType.h"
#include "DartLauncherUpgrade.generated.h"

class UItemUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDartLauncherUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
protected:
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDartLauncherUpgradeType Type;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> ProjectileUpgrades;

    UDartLauncherUpgrade();

};

