#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "MultiHitscanHitCountDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMultiHitscanHitCountDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredHitCountName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredHitCount;

    UMultiHitscanHitCountDamageCondition();

};

