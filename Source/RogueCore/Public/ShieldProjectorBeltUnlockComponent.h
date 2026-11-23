#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PerkInputUnlockComponent.h"
#include "Templates/SubclassOf.h"
#include "ShieldProjectorBeltUnlockComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UShieldProjectorBeltUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Shield;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeoutHandle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;

    UShieldProjectorBeltUnlockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopShieldProjector();
    
    UFUNCTION(BlueprintCallable)
    void StartShieldProjector();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void On_StartShieldProjector();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void On_EndShieldProjector();
    
};

