#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FSDPawn.h"
#include "WallMouth.generated.h"

class UWallMouthAnimInstance;

UCLASS(Blueprintable)
class ROGUECORE_API AWallMouth : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWallMouthAnimInstance* AnimInstance;

    AWallMouth(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

