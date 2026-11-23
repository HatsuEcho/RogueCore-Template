#include "TunnelConstruction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "ConstructionSplineComponent.h"
#include "RoomSphereCollisionComponent.h"
#include "TerrainPlacementComponent.h"

ATunnelConstruction::ATunnelConstruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->RoomSphereCollision = CreateDefaultSubobject<URoomSphereCollisionComponent>(TEXT("RoomSphereCollision"));
    this->TunnelReshapeSpline = CreateDefaultSubobject<UConstructionSplineComponent>(TEXT("StartLoc"));
    this->bShouldForceSpawn = false;
    this->bAdjustNextRoomPosition = false;
    this->AdditionalNextRoomOffset = 0.00f;
    this->TunnelReshapeSpline->SetupAttachment(RootComponent);
    this->terrainPlacement->SetupAttachment(RootComponent);
    this->TunnelPointSelection = ETunnelPointSelection::Middle;
}


