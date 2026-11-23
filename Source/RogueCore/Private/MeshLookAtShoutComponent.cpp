#include "MeshLookAtShoutComponent.h"

UMeshLookAtShoutComponent::UMeshLookAtShoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMeshLookAtShoutComponent::UnbindMeshes(const TArray<UPrimitiveComponent*>& Meshes) {
}

UDialogDataAsset* UMeshLookAtShoutComponent::GetShoutForMesh(const UPrimitiveComponent* mesh) const {
    return NULL;
}

void UMeshLookAtShoutComponent::ClearShoutBindings() {
}

void UMeshLookAtShoutComponent::BindShoutToMeshes(UDialogDataAsset* Shout, const TArray<UPrimitiveComponent*>& Meshes) {
}


