#pragma once
#include "CoreMinimal.h"
#include "CollectionConditionBase.h"
#include "LocalPlayerHasCollectionCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API ULocalPlayerHasCollectionCondition : public UCollectionConditionBase {
    GENERATED_BODY()
public:
    ULocalPlayerHasCollectionCondition();

};

