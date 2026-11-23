#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EnemyScaleAfflictionEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UEnemyScaleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevertOnEndEffect;

    UEnemyScaleAfflictionEffect();

};

