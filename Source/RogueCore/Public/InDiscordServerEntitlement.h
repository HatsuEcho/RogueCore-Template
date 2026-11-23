#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=AdvertisedEntitlement -FallbackName=AdvertisedEntitlement
#include "AdvertisedEntitlement.h"
#include "InDiscordServerEntitlement.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UInDiscordServerEntitlement : public UAdvertisedEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordServerURL;

    UInDiscordServerEntitlement();

};

