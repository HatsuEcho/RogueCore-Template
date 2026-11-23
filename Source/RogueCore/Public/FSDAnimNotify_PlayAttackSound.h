#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify_PlaySound -FallbackName=AnimNotify_PlaySound
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "EAudioCharacterOverrideType.h"
#include "FSDAnimNotify_PlayAttackSound.generated.h"

class USoundAttenuation;
class USoundClass;
class USoundControlBusMix;
class USoundMix;

UCLASS(Blueprintable, CollapseCategories)
class ROGUECORE_API UFSDAnimNotify_PlayAttackSound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioCharacterOverrideType OverrideType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* OverrideAttenuation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* OverrideSoundClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* OverrideSoundClassMix;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundControlBusMix* OverrideControlBusMix;

    UFSDAnimNotify_PlayAttackSound();

};

