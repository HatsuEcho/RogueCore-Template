#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "QueuedExplosionLogicUnlockDamage.h"
#include "QueuedExplosionLogicUnlockEffects.h"
#include "QueuedExplosionLogicUnlockEntry.h"
#include "QueuedExplosionLogicUnlockComponent.generated.h"

class USoundBase;


UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UQueuedExplosionLogicUnlockComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FQueuedExplosionLogicUnlockEntry> QueuedExplosions;

public:
    UQueuedExplosionLogicUnlockComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowEffects(const FQueuedExplosionLogicUnlockEffects& effects, const float Damage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddQueuedExplosion(const FQueuedExplosionLogicUnlockDamage& Damage, const FQueuedExplosionLogicUnlockEffects& effects);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerExplosionSound(USoundBase* ExplosionSound, const FVector& ExplosionLocation);

};

