#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BXEProspectingRewardActor.generated.h"

class UBXEProspectingLogsObjective;
class USceneComponent;
class UTerrainPlacementComponent;
class UTerrainScannerStaticMesh;

UCLASS(Blueprintable)
class ROGUECORE_API ABXEProspectingRewardActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainScannerStaticMesh* ScannerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXEProspectingLogsObjective* Objective;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxOffset;

    ABXEProspectingRewardActor(const FObjectInitializer& ObjectInitializer);

};

