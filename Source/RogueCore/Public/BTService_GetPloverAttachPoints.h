#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "EPloverPositioningMode.h"
#include "BTService_GetPloverAttachPoints.generated.h"

class UPloverTargetSockets;

UCLASS(Blueprintable)
class ROGUECORE_API UBTService_GetPloverAttachPoints : public UBTService {
    GENERATED_BODY()
protected:
    
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPloverPositioningMode PositioningMode;
    
    
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPloverTargetSockets* TargetPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositioningMaxRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositioningMinRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationKey;

    UBTService_GetPloverAttachPoints();

};

