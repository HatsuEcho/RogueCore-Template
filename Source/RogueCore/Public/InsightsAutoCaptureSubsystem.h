#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "InsightsAutoCaptureSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UInsightsAutoCaptureSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UInsightsAutoCaptureSubsystem();

};

