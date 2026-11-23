#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WallMouthAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UWallMouthAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPuking;

    UWallMouthAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsPuking(bool InIsPuking);
    
};

