#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "CaretakerEyeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UCaretakerEyeAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpen;

    UCaretakerEyeAnimInstance();

};

