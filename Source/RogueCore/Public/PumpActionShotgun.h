#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "PumpActionShotgun.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class APumpActionShotgun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_SpeciallastShotMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_SpeciallastShotMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_SpeciallastShotMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialLastShotChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FireSpecialLastShot;
    
public:
    APumpActionShotgun(const FObjectInitializer& ObjectInitializer);

};

