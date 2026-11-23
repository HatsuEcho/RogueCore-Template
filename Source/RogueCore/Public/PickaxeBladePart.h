#pragma once
#include "CoreMinimal.h"
#include "PickaxeMeshPart.h"
#include "PickaxeBladePart.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPickaxeBladePart : public UPickaxeMeshPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictedToBackside;

    UPickaxeBladePart();

};

