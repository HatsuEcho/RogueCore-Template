#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyPawn.h"
#include "ShootingPlant.generated.h"

class AActor;

UCLASS(Blueprintable)
class ROGUECORE_API AShootingPlant : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsVisible;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Target, meta=(AllowPrivateAccess=true))
    AActor* Target;

    AShootingPlant(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Target();
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

