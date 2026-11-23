#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "BossRiftActor.generated.h"

class UEnemyHealthComponent;
class UHealthComponentBase;
class UMutator;
class USceneComponent;

UCLASS(Blueprintable)
class ABossRiftActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterBossDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* BossRift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* BossHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMutator* SourceMutator;
    
public:
    ABossRiftActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_BossDied();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Activated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossAlive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBossDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleBossDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBossRift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBoss() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_BossDied();
    
};

