#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ElevatorCageAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UElevatorCageAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CageOpen;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool NextCageOpen;

    UElevatorCageAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsOpen(const bool Open);
    
};

