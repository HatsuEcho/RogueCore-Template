#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "WeightedTerrainPointActors.h"
#include "PostConstructionSpawnDataAsset.generated.h"

class UPostConstructionSpawnData;

UCLASS(Blueprintable)
class ROGUECORE_API UPostConstructionSpawnDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPostConstructionSpawnData*> SpawnInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeightedTerrainPointActors FillUnusedPointsData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPostConstructionSpawnData*> FinalSpawnData;

    UPostConstructionSpawnDataAsset();

};

