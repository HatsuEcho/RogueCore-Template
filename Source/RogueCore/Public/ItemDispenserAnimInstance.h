#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ItemDispenserAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UItemDispenserAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpen;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasItem;

    UItemDispenserAnimInstance();

};

