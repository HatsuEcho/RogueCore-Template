#pragma once
#include "CoreMinimal.h"
#include "EnemyResourceDropPlayerCountModifier.generated.h"

USTRUCT(BlueprintType)
struct FEnemyResourceDropPlayerCountModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropChance;
    
    ROGUECORE_API FEnemyResourceDropPlayerCountModifier();
};

