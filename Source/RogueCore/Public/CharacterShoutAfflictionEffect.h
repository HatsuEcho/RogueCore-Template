#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CharacterShoutAfflictionEffect.generated.h"

class UDialogDataAsset;

UCLASS(Blueprintable)
class ROGUECORE_API UCharacterShoutAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* Shout;

    UCharacterShoutAfflictionEffect();

};

