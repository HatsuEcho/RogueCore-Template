#pragma once
#include "CoreMinimal.h"
#include "PostConstructionSpawnData.h"
#include "StaticSpawnPointSelection.h"
#include "StaticPointPostConstructionSpawnData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UStaticPointPostConstructionSpawnData : public UPostConstructionSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticSpawnPointSelection StaticSpawnPointSelection;

    UStaticPointPostConstructionSpawnData();

};

