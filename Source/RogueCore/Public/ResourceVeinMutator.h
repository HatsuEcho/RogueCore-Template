#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceVeinMutator.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UResourceVeinMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VeinLengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseRangeMultiplier;
    
    UResourceVeinMutator();

};

