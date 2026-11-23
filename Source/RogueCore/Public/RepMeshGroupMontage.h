#pragma once
#include "CoreMinimal.h"
#include "RepMeshGroupMontage.generated.h"

USTRUCT(BlueprintType)
struct FRepMeshGroupMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 PlaybackGeneration;
    
    ROGUECORE_API FRepMeshGroupMontage();
};

