#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EscortMuleAnimInstance.generated.h"

class UHealthComponent;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UEscortMuleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LeftCannistersVisible;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RightCannistersVisible;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEngineRunning;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBeingRefueled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PlatformOut;

    UEscortMuleAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTookDamage(UHealthComponent* Health);
    
};

