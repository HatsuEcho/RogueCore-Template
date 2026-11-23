#pragma once
#include "CoreMinimal.h"
#include "MeshGroupMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FMeshGroupMontages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ByMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LeaderMontages;
    
    ROGUECORE_API FMeshGroupMontages();
};

