#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "PlayerCharacterMontageAfflictionEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ROGUECORE_API UPlayerCharacterMontageAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_Montage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_Montage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOut;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RandomStarts;

    UPlayerCharacterMontageAfflictionEffect();

};

