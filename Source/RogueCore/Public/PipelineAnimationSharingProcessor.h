#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationSharing -ObjectName=AnimationSharingStateProcessor -FallbackName=AnimationSharingStateProcessor
#include "AnimationSharingTypes.h"
#include "PipelineAnimationSharingProcessor.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UPipelineAnimationSharingProcessor : public UAnimationSharingStateProcessor {
    GENERATED_BODY()
public:
    UPipelineAnimationSharingProcessor();

};

