#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "GeneratedRunForBiome.h"
#include "CampaignRunSelector.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UCampaignRunSelector : public UObject {
    GENERATED_BODY()
public:
    UCampaignRunSelector();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContext"))
    int32 SelectRun(const UObject* WorldContext, const int32 MapSeed, const TArray<FGeneratedRunForBiome>& Candidates) const;
    
};

