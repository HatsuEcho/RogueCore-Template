#pragma once
#include "CoreMinimal.h"
#include "ActiveAttackMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FActiveAttackMontage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActiveMontage;
    
public:
    ROGUECORE_API FActiveAttackMontage();
};

