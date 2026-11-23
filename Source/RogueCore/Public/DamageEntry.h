#pragma once
#include "CoreMinimal.h"
#include "DamageEntry.generated.h"

class UDamageClass;

USTRUCT(BlueprintType)
struct FDamageEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDamageClass> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalAmount;
    
    ROGUECORE_API FDamageEntry();
};

