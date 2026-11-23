#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "StunnedAfflictionEffect.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UStunnedAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunStrength;

    UStunnedAfflictionEffect();

};

