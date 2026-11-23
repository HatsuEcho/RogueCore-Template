#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OverlapPair.h"
#include "OverlapTrackingSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UOverlapTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOverlapPair> Overlaps;

    UOverlapTrackingSubsystem();

};

