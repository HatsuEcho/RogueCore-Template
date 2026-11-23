#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CameraParticleAfflictionEffect.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class ROGUECORE_API UCameraParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleEffect;

    UCameraParticleAfflictionEffect();

};

