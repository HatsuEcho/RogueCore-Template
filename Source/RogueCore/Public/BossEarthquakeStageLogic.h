#pragma once
#include "CoreMinimal.h"
#include "StageLogic.h"
#include "BossEarthquakeStageLogic.generated.h"

class IBossFightInterface;
class UBossFightInterface;
class UBossEarthquakeMutator;
class UHealthComponentBase;

UCLASS(Blueprintable)
class UBossEarthquakeStageLogic : public UStageLogic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBossEarthquakeMutator* Mutator;
    
public:
    UBossEarthquakeStageLogic();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNewBossFight(const TScriptInterface<IBossFightInterface>& BossFight);
    
    UFUNCTION(BlueprintCallable)
    void OnBossFightRemoved(const TScriptInterface<IBossFightInterface>& BossFight);
    
    UFUNCTION(BlueprintCallable)
    void OnBossDeath(UHealthComponentBase* HealthComponent);
    
};

