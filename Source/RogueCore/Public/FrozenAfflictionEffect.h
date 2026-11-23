#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EFrozenAfflictionType.h"
#include "FrozenAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UFrozenAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenAfflictionType AfflictionType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> IceMaterials;

    UFrozenAfflictionEffect();

};

