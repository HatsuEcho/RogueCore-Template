#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeFilter.h"
#include "CategoryUpgradeFilters.generated.h"

class UItemUpgradeCategory;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCategoryUpgradeFilters : public UItemUpgradeFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgradeCategory*> Blacklist;
    
    UCategoryUpgradeFilters();

};

