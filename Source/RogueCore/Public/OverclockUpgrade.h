#pragma once
#include "CoreMinimal.h"
#include "CombinedUpgrade.h"
#include "OverclockUpgrade.generated.h"

class USchematicCategory;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UOverclockUpgrade : public UCombinedUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* SchematicCategory;

    UOverclockUpgrade();

};

