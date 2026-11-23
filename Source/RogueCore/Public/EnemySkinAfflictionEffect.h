#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EnemySkinAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ROGUECORE_API UEnemySkinAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> NewMaterials;

    UEnemySkinAfflictionEffect();

};

