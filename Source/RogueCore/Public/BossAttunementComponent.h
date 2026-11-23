#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "BossAttunementComponent.generated.h"

class ABossAttunementCrystal;
class AFSDPawn;
class UBossAttunementMutator;
class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBossAttunementComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBossAttunementMutator* Mutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDPawn* Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABossAttunementCrystal*> Crystals;
    
public:
    UBossAttunementComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCrystalDied(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnBossDied(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossImmune() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLiveCrystalCount() const;
    
};

