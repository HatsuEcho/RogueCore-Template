#pragma once
#include "CoreMinimal.h"
#include "AlterationWheelFrameStyle.h"
#include "AlterationWheelHandStyle.h"
#include "AlterationWheelHubStyle.h"
#include "AlterationWheelIconStyle.h"
#include "AlterationWheelRingStyle.h"
#include "AlterationWheelSegmentStyle.h"
#include "AlterationWheelStyle.generated.h"

USTRUCT(BlueprintType)
struct FAlterationWheelStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelRingStyle Ring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelSegmentStyle Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelIconStyle Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelHandStyle Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelHubStyle Hub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelFrameStyle Frame;
    
    ROGUECORE_API FAlterationWheelStyle();
};

