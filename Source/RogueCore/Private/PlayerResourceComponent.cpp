#include "PlayerResourceComponent.h"

UPlayerResourceComponent::UPlayerResourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UPlayerResourceComponent* UPlayerResourceComponent::GetFromPlayer(const APlayerCharacter* PlayerCharacter) {
    return NULL;
}


