#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GenerationItem.h"
#include "RandomSelectorItem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ARandomSelectorItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    ARandomSelectorItem(const FObjectInitializer& ObjectInitializer);

};

