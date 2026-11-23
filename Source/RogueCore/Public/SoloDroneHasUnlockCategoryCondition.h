#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "ECategoryConditionListMode.h"
#include "SoloDroneHasUnlockCategoryCondition.generated.h"

class UBXEUnlockCategory;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API USoloDroneHasUnlockCategoryCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockCategory*> Categories;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryConditionListMode ListMode;

    USoloDroneHasUnlockCategoryCondition();

};

