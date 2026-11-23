#pragma once
#include "CoreMinimal.h"
#include "PostConstructionSpawnData.h"
#include "StaticSpawnPointSelection.h"
#include "TerrainAndStaticPostConstructionSpawnData.generated.h"

class UCurveFloat;
class UDebrisPositioning;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UTerrainAndStaticPostConstructionSpawnData : public UPostConstructionSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceCostCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToOtherLocations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToImportantLocations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseStaticSpawnPointProbability;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticSpawnPointSelection StaticSpawnPointSelection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBackfillStaticSpawnPoint;

    UTerrainAndStaticPostConstructionSpawnData();

};

