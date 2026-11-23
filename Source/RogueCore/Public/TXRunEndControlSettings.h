#pragma once
#include "CoreMinimal.h"
#include "TXRunEndControlSettings.generated.h"

USTRUCT(BlueprintType)
struct FTXRunEndControlSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sprint_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mouse_smoothing_enabled;
    
    ROGUECORE_API FTXRunEndControlSettings();
};

