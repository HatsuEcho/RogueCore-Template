#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEvent.h"
#include "ExplosiveBarrelEvent.generated.h"

class UDamageComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AExplosiveBarrelEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndDamage;
    
    AExplosiveBarrelEvent(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

