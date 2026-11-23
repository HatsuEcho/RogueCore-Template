#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EProspectorRobotState.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "ProspectorRobot.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ROGUECORE_API AProspectorRobot : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkingArmSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnginePowerMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadResponsiveness;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadSearchSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadSearchMaxAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* EngineMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProspectorState, meta=(AllowPrivateAccess=true))
    EProspectorRobotState ProspectorState;

    AProspectorRobot(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetArmSpeed(float Speed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateEnd(EProspectorRobotState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateBegin(EProspectorRobotState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProspectorState(EProspectorRobotState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateActive(EProspectorRobotState State) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(EProspectorRobotState NewState);
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

