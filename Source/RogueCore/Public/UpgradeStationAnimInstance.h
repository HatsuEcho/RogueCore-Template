#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UpgradeStationAnimInstance.generated.h"

class AHealthUpgradeStation;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UUpgradeStationAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool OneAvailable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool TwoAvailable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ThreeAvailable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FourAvailable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBeingDepositedTo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHealthUpgradeStation> UpgradeStation;

    UUpgradeStationAnimInstance();

};

