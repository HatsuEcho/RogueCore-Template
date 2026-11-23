#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "ASimpleFlyingDrone.generated.h"

class UAnimInstance;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AASimpleFlyingDrone : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
    AASimpleFlyingDrone(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }
    UFUNCTION(BlueprintCallable)
    virtual float QueueMontage(UAnimMontage* Montage) override;

    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetSkeletalMesh() const override;

    UFUNCTION(BlueprintCallable)
    virtual UAnimInstance* GetAnimInstance() const override;
    
};

