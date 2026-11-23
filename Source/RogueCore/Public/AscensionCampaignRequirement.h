#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "AscensionCampaignRequirement.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UAscensionCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRequirement;

    UAscensionCampaignRequirement();

};

