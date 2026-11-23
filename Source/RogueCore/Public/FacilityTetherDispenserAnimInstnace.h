#pragma once
#include "CoreMinimal.h"
#include "EHackingPodState.h"
#include "ItemDispenserAnimInstance.h"
#include "FacilityTetherDispenserAnimInstnace.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UFacilityTetherDispenserAnimInstnace : public UItemDispenserAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHackingPodState PodState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldShowDispenser;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldCloseFromDispenser;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldShowButton;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldHideButton;

    UFacilityTetherDispenserAnimInstnace();

};

