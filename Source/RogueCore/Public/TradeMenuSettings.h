#pragma once
#include "CoreMinimal.h"
#include "TradeMenuSettings.generated.h"

class UBXETradeWidget;

USTRUCT(BlueprintType)
struct FTradeMenuSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBXETradeWidget> TradeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z_Order;
    
    ROGUECORE_API FTradeMenuSettings();
};

