#pragma once
#include "CoreMinimal.h"
#include "BoilStaticMeshComponentItem.generated.h"

class UBoilStaticMeshComponent;

USTRUCT(BlueprintType)
struct FBoilStaticMeshComponentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBoilStaticMeshComponent> StaticMeshComponent;
    
    ROGUECORE_API FBoilStaticMeshComponentItem();
};

