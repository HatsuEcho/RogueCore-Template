#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RoomFeature.h"
#include "FloodFillProceduralPillar.generated.h"

class UPillarSettings;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UFloodFillProceduralPillar : public URoomFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPillarSettings* PillarSettings;

    UFloodFillProceduralPillar();

};

