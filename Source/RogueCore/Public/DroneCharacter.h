#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeepPathfinderCharacter.h"
#include "DroneCharacter.generated.h"

class UHealthComponent;
class UOutlineComponent;
class USimpleObjectInfoComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ADroneCharacter : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;

    ADroneCharacter(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

