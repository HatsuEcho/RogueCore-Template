#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AscensionHallAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UAscensionHallAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFolded;

    UAscensionHallAnimInstance();

};

