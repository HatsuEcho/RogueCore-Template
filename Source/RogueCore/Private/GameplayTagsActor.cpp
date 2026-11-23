#include "GameplayTagsActor.h"

AGameplayTagsActor::AGameplayTagsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGameplayTagsActor::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
    TagContainer = GameplayTags;
}


