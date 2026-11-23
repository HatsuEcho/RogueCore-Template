#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DropSpikeTrackingSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UDropSpikeTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDropSpikeTrackingSubsystem();

    UFUNCTION(BlueprintCallable)
    void IncrementSpikeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpikeCount() const;
    
};

