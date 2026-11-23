#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=DeepPathFinderPreference -FallbackName=DeepPathFinderPreference
#include "DeepPathFinderPreference.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=DeepPathFinderSize -FallbackName=DeepPathFinderSize
#include "DeepPathFinderSize.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=DeepPathFinderType -FallbackName=DeepPathFinderType
#include "DeepPathFinderType.h"
#include "CablePathSettings.generated.h"

USTRUCT(BlueprintType)
struct FCablePathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderType PathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize PathSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderPreference PathPreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoiseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSurfaceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSurfaceHeight;
    
    ROGUECORE_API FCablePathSettings();
};

