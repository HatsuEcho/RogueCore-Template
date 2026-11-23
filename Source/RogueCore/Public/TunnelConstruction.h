#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETunnelPointSelection.h"
#include "TunnelConstruction.generated.h"

class UConstructionSplineComponent;
class URoomSphereCollisionComponent;
class USceneComponent;
class UTerrainPlacementComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ATunnelConstruction : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomSphereCollisionComponent* RoomSphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConstructionSplineComponent* TunnelReshapeSpline;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldForceSpawn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustNextRoomPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalNextRoomOffset;

    ATunnelConstruction(const FObjectInitializer& ObjectInitializer);

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETunnelPointSelection TunnelPointSelection;

};

