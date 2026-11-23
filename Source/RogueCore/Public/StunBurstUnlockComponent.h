#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "PerkInputUnlockComponent.h"
#include "StunBurstUnlockComponent.generated.h"

class UDamageAsset;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UStunBurstUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* Damage;

    UStunBurstUnlockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DoBurst();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurst(FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowBurst(FVector_NetQuantize Location);
    
};

