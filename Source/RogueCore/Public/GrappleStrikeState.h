#pragma once
#include "CoreMinimal.h"
#include "GrappleStrikeState.generated.h"

class AFSDPawn;

USTRUCT(BlueprintType)
struct FGrappleStrikeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFSDPawn* TargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsGrappling: 1;
    
    ROGUECORE_API FGrappleStrikeState();
};

