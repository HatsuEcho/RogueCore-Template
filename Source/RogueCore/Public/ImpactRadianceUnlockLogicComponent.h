#pragma once
#include "CoreMinimal.h"
#include "AreaDamageReflectionUnlockLogicComponent.h"
#include "Templates/SubclassOf.h"
#include "ImpactRadianceUnlockLogicComponent.generated.h"

class UStatusEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UImpactRadianceUnlockLogicComponent : public UAreaDamageReflectionUnlockLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> SpecificEffectsToSpread;

public:
    UImpactRadianceUnlockLogicComponent(const FObjectInitializer& ObjectInitializer);

};

