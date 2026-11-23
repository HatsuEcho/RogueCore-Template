#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerCharacter.h"
#include "MockPlayerCharacter.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AMockPlayerCharacter : public APlayerCharacter {
    GENERATED_BODY()
public:
    AMockPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

