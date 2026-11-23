#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "GenerationPhysicsHoldSubsystem.generated.h"

UCLASS(Blueprintable)
class UGenerationPhysicsHoldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UGenerationPhysicsHoldSubsystem();

};

