#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "ResourcePickupFeedbackSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UResourcePickupFeedbackSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UResourcePickupFeedbackSubsystem();

};

