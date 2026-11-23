#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=AdvertisedEntitlement -FallbackName=AdvertisedEntitlement
#include "AdvertisedEntitlement.h"
#include "PlatformFollowEntitlement.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UPlatformFollowEntitlement : public UAdvertisedEntitlement {
    GENERATED_BODY()
public:
    UPlatformFollowEntitlement();

};

