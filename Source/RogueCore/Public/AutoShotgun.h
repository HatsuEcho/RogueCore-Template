#pragma once
#include "CoreMinimal.h"
#include "MultiHitscanWeapon.h"
#include "Templates/SubclassOf.h"
#include "BXEDamageEvent.h"
#include "DamageParams.h"
#include "AutoShotgun.generated.h"

class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class ROGUECORE_API AAutoShotgun : public AMultiHitscanWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> CQCKillBuff;

    AAutoShotgun(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(const FBXEDamageEvent& dEvent, const FDamageParams& Params);

};

