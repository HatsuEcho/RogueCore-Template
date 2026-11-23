#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "ElementCondition.h"
#include "TagsElementCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UTagsElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;

    UTagsElementCondition();

};

