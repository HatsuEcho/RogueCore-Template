#pragma once
#include "CoreMinimal.h"
#include "FlyingBugAnimInstance.h"
#include "BomberAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UBomberAnimInstance : public UFlyingBugAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldBomb;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldSpiral;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBombing;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSpiraling;

    UBomberAnimInstance();

};

