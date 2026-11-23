#pragma once
#include "CoreMinimal.h"
#include "BXERadialDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FBXERadialDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDamage;
    
    ROGUECORE_API FBXERadialDamageEvent();
};

