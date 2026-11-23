#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "Math/Interval.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ShootingSpiderAnimInstance.h"
#include "SpiderLobberAnimInstance.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API USpiderLobberAnimInstance : public UShootingSpiderAnimInstance {
    GENERATED_BODY()
protected:
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval LiquidInBumRange;
    
    
    
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector EffectiveLiquidInBum;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiquidInBumEaseInExp;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiquidInBumTimeToMax;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiquidInBumTimeToMaxShort;

    USpiderLobberAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetAttackIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetLiquidInBum();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* InHealthComponent);
    
};

