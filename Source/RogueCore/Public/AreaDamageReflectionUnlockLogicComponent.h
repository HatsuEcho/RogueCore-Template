#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "BXEDamageEvent.h"
#include "BXELogicUnlockComponent.h"
#include "DamageParams.h"
#include "AreaDamageReflectionUnlockLogicComponent.generated.h"

class AFSDPawn;
class UNiagaraSystem;
class USoundBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAreaDamageReflectionUnlockLogicComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugSphere;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TriggerEffect;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TriggerSound;

public:
    UAreaDamageReflectionUnlockLogicComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerEffectsManually(const FVector& Center, const float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpreadDamage(const AFSDPawn* SpreadFrom, const TArray<AFSDPawn*>& SpreadTo, const FBXEDamageEvent& DamageEvent, const FDamageParams& DamageParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSpreadDamage(const AFSDPawn* SpreadFrom, const FBXEDamageEvent& DamageEvent, const FDamageParams& DamageParameters) const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowEffects(const FVector_NetQuantize& Center, const float Radius);
    
};

