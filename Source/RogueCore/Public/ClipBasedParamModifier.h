#pragma once
#include "CoreMinimal.h"
#include "SoundParamModifier.h"
#include "ClipBasedParamModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UClipBasedParamModifier : public USoundParamModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipCountOffset;
    
    UClipBasedParamModifier();

};

