#include "PipelineSplineComponent.h"

UPipelineSplineComponent::UPipelineSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartMesh = NULL;
    this->EndMesh = NULL;
    this->StartMeshLength = 0.00f;
    this->EndMeshLength = 0.00f;
    this->SegmentLength = 400.00f;
    this->bApplySplineScale = true;
    this->bApplySplineRoll = true;
    this->MaterialOverride = NULL;
    this->CollisionProfileName = TEXT("track");
    this->bCastShadow = true;
    this->MaxDrawDistance = 0.00f;
    this->bGrindable = true;
    this->GrindRailSampleStep = 50.00f;
    this->bDrawGrindRails = false;
    this->ConnectedAtEnd = NULL;
    this->ConnectedAtStart = NULL;
    this->bRegisterWithPathfinder = true;
    this->PathfinderRadius = 100.00f;
    this->PathfinderCollisionType = PFCollisionType::SolidWalkable;
    this->StartMeshComponent = NULL;
    this->EndMeshComponent = NULL;
    this->GrindRailRight = NULL;
    this->GrindRailLeft = NULL;
}

void UPipelineSplineComponent::SetGrindable(bool bInGrindable) {
}

void UPipelineSplineComponent::RebuildPipeline() {
}

UStaticMeshComponent* UPipelineSplineComponent::GetStartMeshComponent() const {
    return NULL;
}

TArray<USplineMeshComponent*> UPipelineSplineComponent::GetSegmentMeshComponents() const {
    return TArray<USplineMeshComponent*>();
}

int32 UPipelineSplineComponent::GetNumSegments() const {
    return 0;
}

TArray<USplineMeshComponent*> UPipelineSplineComponent::GetLayerSegmentMeshComponents(int32 LayerIndex) const {
    return TArray<USplineMeshComponent*>();
}

bool UPipelineSplineComponent::GetGrindable() const {
    return false;
}

UStaticMeshComponent* UPipelineSplineComponent::GetEndMeshComponent() const {
    return NULL;
}


