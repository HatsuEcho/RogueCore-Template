#pragma once
#include "CoreMinimal.h"
#include "TXPlayerDamage.h"
#include "TXRunEndDamage.generated.h"

USTRUCT(BlueprintType)
struct FTXRunEndDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXPlayerDamage> damage_done;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXPlayerDamage> damage_taken;
    
    ROGUECORE_API FTXRunEndDamage();
};

