#pragma once
#include "CoreMinimal.h"
#include "ChargedWeapon.h"
#include "ThrowableHammer.generated.h"

class AHammerProjectile;
class URecallableProjectileComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AThrowableHammer : public AChargedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHammerProjectile* ThrownHammer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldingUse;

    AThrowableHammer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetThrownHammerProjectile(AHammerProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable)
    void CollectRecallable(URecallableProjectileComponent* RecallComponent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectRecallable(URecallableProjectileComponent* RecallComponent);
    
};

