#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "BXEActorCloseLogicUnlock.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEActorCloseLogicUnlock : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsInRange;

private:
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> CachedRelevantActors;
    
public:
    UBXEActorCloseLogicUnlock(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerRelevantActorsUpdate();
    
    UFUNCTION(BlueprintCallable)
    void TriggerOverlappedActorsUpdate();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsManuallyControlled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredActorCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CacheUpdateTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDebugPrint;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCountActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorExit(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorEnter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyActorInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalModifierValueAdditive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetRelevantActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActorsInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMaxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClampedInRangeModifierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsInRange() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearOverlappedActors();
    
};

