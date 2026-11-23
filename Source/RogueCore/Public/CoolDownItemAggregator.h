#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "CoolDownItemAggregator.generated.h"

class AItem;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UCoolDownItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioCoolDownFinished;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CooldownRemaining;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CoolDownIsPaused;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;

    UCoolDownItemAggregator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPaused(bool IsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCoolDown(bool startPaused);
    
};

