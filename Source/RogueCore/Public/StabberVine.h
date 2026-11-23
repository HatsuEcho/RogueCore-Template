#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TentacleBase.h"
#include "TentacleTarget.h"
#include "StabberVine.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AStabberVine : public ATentacleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DesiredTarget, meta=(AllowPrivateAccess=true))
    FTentacleTarget DesiredTarget;

    AStabberVine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredTarget();
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

