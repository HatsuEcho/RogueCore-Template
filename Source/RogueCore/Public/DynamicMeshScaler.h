#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DynamicMeshScaler.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UDynamicMeshScaler : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDynamicMeshScaler();

};

