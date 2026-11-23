#pragma once
#include "CoreMinimal.h"
#include "EquipItemAbility.h"
#include "GrappleStrikeAbility.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UGrappleStrikeAbility : public UEquipItemAbility {
    GENERATED_BODY()
public:
    UGrappleStrikeAbility(const FObjectInitializer& ObjectInitializer);

};

