#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BasicThrowableItem.h"
#include "BasicDepositableItem.generated.h"

class UResourceData;

UCLASS(Blueprintable)
class ROGUECORE_API ABasicDepositableItem : public ABasicThrowableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* DepositableResource;

    ABasicDepositableItem(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

