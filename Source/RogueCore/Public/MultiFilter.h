#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "EDamagelistenerMultiFilterType.h"
#include "MultiFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMultiFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamageListenerTriggerFilter*> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamagelistenerMultiFilterType Type;
    
    UMultiFilter();

};

