#pragma once
#include "CoreMinimal.h"
#include "NisseAnimInstance.h"
#include "EasterBunnyAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UEasterBunnyAnimInstance : public UNisseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindUpTurnSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindUpTimer;

    UEasterBunnyAnimInstance();

};

