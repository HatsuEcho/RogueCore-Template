#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "VoipCleanupSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UVoipCleanupSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UVoipCleanupSubsystem();

};

