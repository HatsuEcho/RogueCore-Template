#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "BXELogicUnlockComponent.h"
#include "BoomYoureDeadEntry.h"
#include "DamageInstance.h"
#include "BoomYoureDeadComponent.generated.h"

class UNiagaraSystem;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBoomYoureDeadComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInstance DamageInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBoomYoureDeadEntry> QueuedExplosions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ExplosionEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ExplosionSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadPercent;

    UBoomYoureDeadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowEffects(const FVector_NetQuantize& Location, float Size);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerExplosionSound(USoundBase* ExplosionSoundToPlay, const FVector& ExplosionLocation);

};

