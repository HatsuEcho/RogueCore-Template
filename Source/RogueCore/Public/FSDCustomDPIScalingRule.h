#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DPICustomScalingRule -FallbackName=DPICustomScalingRule
#include "Engine/DPICustomScalingRule.h"
#include "FSDCustomDPIScalingRule.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFSDCustomDPIScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UFSDCustomDPIScalingRule();

};

