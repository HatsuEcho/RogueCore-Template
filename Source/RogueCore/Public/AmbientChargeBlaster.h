#pragma once
#include "CoreMinimal.h"
#include "ChargedWeapon.h"
#include "AmbientChargeBlaster.generated.h"

class UAnimMontage;
class UChargedProjectileLauncherComponent;
class UCurveFloat;
class UNiagaraSystem;

UCLASS(Blueprintable)
class ROGUECORE_API AAmbientChargeBlaster : public AChargedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeProgressForOtherFireAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OtherFireAnimFP;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OtherFireAnimTP;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeRecoilCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MuzzleParticlesWeak;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChargedProjectileLauncherComponent* LauncherComponent;

    AAmbientChargeBlaster(const FObjectInitializer& ObjectInitializer);

};

