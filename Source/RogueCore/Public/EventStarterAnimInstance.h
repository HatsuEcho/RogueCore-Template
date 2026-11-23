#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EventStarterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UEventStarterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UseProgress;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpenForUse;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBooted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEventActive;

    UEventStarterAnimInstance();

};

