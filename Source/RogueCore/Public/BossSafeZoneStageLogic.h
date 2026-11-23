#pragma once
#include "CoreMinimal.h"
#include "StageLogic.h"
#include "BossSafeZoneStageLogic.generated.h"

class AActor;
class ABossSafeZone;
class IBossFightInterface;
class UBossFightInterface;
class UBossSafeZoneMutator;
class UEnemyHealthComponent;
class UHealthComponentBase;

UCLASS(Blueprintable)
class UBossSafeZoneStageLogic : public UStageLogic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBossSafeZoneMutator* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABossSafeZone*> ActiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyHealthComponent> BossHealth;
    
public:
    UBossSafeZoneStageLogic();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNewBossFight(const TScriptInterface<IBossFightInterface>& BossFight);
    
    UFUNCTION(BlueprintCallable)
    void OnBossFightRemoved(const TScriptInterface<IBossFightInterface>& BossFight);
    
    UFUNCTION(BlueprintCallable)
    void OnBossDied(UHealthComponentBase* HealthComponent);
    
};

