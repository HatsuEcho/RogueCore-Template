#pragma once
#include "CoreMinimal.h"
#include "AlterationWheelSettings.generated.h"

class UAlterationWheelWindow;

USTRUCT(BlueprintType)
struct FAlterationWheelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAlterationWheelWindow> WheelWidget;
    
    ROGUECORE_API FAlterationWheelSettings();
};

