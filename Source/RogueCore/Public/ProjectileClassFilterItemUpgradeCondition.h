#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeCondition.h"
#include "Templates/SubclassOf.h"
#include "ProjectileClassFilterItemUpgradeCondition.generated.h"

class AProjectileBase;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UProjectileClassFilterItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AProjectileBase>> ProjectileClasses;

    UProjectileClassFilterItemUpgradeCondition();

};

