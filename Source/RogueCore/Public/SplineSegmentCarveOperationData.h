#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=CarveSplineSegment -FallbackName=CarveSplineSegment
#include "CarveSplineSegment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
#include "ECarveFilterType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=EPreciousMaterialOptions -FallbackName=EPreciousMaterialOptions
#include "EPreciousMaterialOptions.h"
#include "SplineSegmentCarveOperationData.generated.h"

class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FSplineSegmentCarveOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarveSplineSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Noise;
    
    ROGUECORE_API FSplineSegmentCarveOperationData();
};

