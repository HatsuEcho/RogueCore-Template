#include "EllisDroneAttachmentPointComponent.h"

UEllisDroneAttachmentPointComponent::UEllisDroneAttachmentPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsNegotiationAllowed = true;
}

void UEllisDroneAttachmentPointComponent::SetIsNegotiationAllowed(const bool IsAllowed) {
}

bool UEllisDroneAttachmentPointComponent::IsNegotiationAllowed() const {
    return false;
}


