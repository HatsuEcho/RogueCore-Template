#pragma once
#include "CoreMinimal.h"
#include "ResourceConditionEntry.h"
#include "UseConditionBase.h"
#include "UseConditionResourceFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUseConditionResourceFilter : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceConditionEntry> HasResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAny;
    
    UUseConditionResourceFilter();

};

