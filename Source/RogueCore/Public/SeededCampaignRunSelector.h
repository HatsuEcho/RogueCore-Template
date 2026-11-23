#pragma once
#include "CoreMinimal.h"
#include "CampaignRunSelector.h"
#include "SeededCampaignRunSelector.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USeededCampaignRunSelector : public UCampaignRunSelector {
    GENERATED_BODY()
public:
    USeededCampaignRunSelector();

};

