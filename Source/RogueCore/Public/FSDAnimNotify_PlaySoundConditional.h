#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify_PlaySound -FallbackName=AnimNotify_PlaySound
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "EAudioCharacterOverrideType.h"
#include "FSDAnimNotify_PlaySoundConditional.generated.h"

class USoundAttenuation;
class USoundClass;

UCLASS(Blueprintable, CollapseCategories)
class ROGUECORE_API UFSDAnimNotify_PlaySoundConditional : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioCharacterOverrideType OverrideType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* OverrideAttenuation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* OverrideSoundClass;

    UFSDAnimNotify_PlaySoundConditional();

};

