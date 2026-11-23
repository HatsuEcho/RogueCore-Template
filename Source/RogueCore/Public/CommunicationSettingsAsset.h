#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommunicationCharacterSettings.h"
#include "CommunicationSettingsAsset.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UCommunicationSettingsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommunicationCharacterSettings CharacterSettings;

    UCommunicationSettingsAsset();

};

