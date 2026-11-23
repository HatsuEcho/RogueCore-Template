#include "ObjectInfoComponent.h"

UObjectInfoComponent::UObjectInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UObjectInfoComponent::HasMissionControlLookAtShout(const UPrimitiveComponent* targetComponent) const {
    return false;
}

UDialogDataAsset* UObjectInfoComponent::GetMissionControlLookAtShout(const UPrimitiveComponent* targetComponent) const {
    return NULL;
}

UDialogDataAsset* UObjectInfoComponent::GetLookAtShout(const UPrimitiveComponent* targetComponent) const {
    return NULL;
}

bool UObjectInfoComponent::GetIsPingableByLaserpointer(const UPrimitiveComponent* targetComponent) const {
    return false;
}

FText UObjectInfoComponent::GetInGameName(const UPrimitiveComponent* targetComponent) const {
    return FText::GetEmpty();
}

FLinearColor UObjectInfoComponent::GetInGameIconTint(const UPrimitiveComponent* targetComponent) const {
    return FLinearColor{};
}

UTexture2D* UObjectInfoComponent::GetInGameIcon(const UPrimitiveComponent* targetComponent) const {
    return NULL;
}

FText UObjectInfoComponent::GetInGameDescription(const UPrimitiveComponent* targetComponent) const {
    return FText::GetEmpty();
}

UActorContextWidget* UObjectInfoComponent::GetContextWidget(APlayerController* InPlayerController) {
    return NULL;
}


