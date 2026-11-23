#pragma once
#include "CoreMinimal.h"
#include "ItemAnimationItem.h"
#include "ItemAnimationSet.generated.h"

USTRUCT(BlueprintType)
struct FItemAnimationSet {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAnimationItem> AnimationsItems;
    
public:
    ROGUECORE_API FItemAnimationSet();
};

