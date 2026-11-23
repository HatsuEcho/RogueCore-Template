#pragma once
#include "CoreMinimal.h"
#include "BoilStaticMeshComponentItem.h"
#include "BoilStaticMeshComponentPool.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBoilStaticMeshComponentPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoilStaticMeshComponentItem> StaticMeshComponentArray;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UStaticMesh* BoilMesh;
    
public:
    ROGUECORE_API FBoilStaticMeshComponentPool();
};

