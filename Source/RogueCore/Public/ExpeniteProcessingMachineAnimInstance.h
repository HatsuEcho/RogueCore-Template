#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ExpeniteProcessingMachineAnimInstance.generated.h"

class UCurveVector;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UExpeniteProcessingMachineAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpenitePotZOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpenitePotScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ShrinkCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldStartShrinking;

    UExpeniteProcessingMachineAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetMaxTime(const float Time);
    
};

