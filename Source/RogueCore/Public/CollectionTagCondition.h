#pragma once
#include "CoreMinimal.h"
#include "ERarityComparision.h"
#include "RarityConditionBase.h"
#include "CollectionTagCondition.generated.h"

class UUnlockCollectionTag;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UCollectionTagCondition : public URarityConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* CollectionCondition;

private:
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERarityComparision Comparison;
    
public:
    UCollectionTagCondition();

};

