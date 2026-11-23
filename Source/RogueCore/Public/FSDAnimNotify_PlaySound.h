#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify_PlaySound -FallbackName=AnimNotify_PlaySound
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FSDAnimNotify_PlaySound.generated.h"

class USoundParamModifier;


UCLASS(Blueprintable, CollapseCategories)
class ROGUECORE_API UFSDAnimNotify_PlaySound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UFSDAnimNotify_PlaySound();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USoundParamModifier*> ParamModifiers;

};

