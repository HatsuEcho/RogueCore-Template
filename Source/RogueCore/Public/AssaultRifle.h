#pragma once
#include "CoreMinimal.h"
#include "HitscanWeapon.h"
#include "Templates/SubclassOf.h"
#include "BXEDamageEvent.h"
#include "DamageParams.h"
#include "AssaultRifle.generated.h"

class AActor;
class UFSDPhysicalMaterial;
class UStatusEffect;

UCLASS(Blueprintable)
class ROGUECORE_API AAssaultRifle : public AHitscanWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float KillsResetAccuracyDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool KillsTriggersStatusEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> KillTriggeredStatusEffect;

    AAssaultRifle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetAccuracy();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(const FBXEDamageEvent& dEvent, const FDamageParams& Params);

};

