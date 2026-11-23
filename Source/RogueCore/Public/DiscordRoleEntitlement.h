#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=BaseEntitlement -FallbackName=BaseEntitlement
#include "BaseEntitlement.h"
#include "DiscordRoleEntitlement.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UDiscordRoleEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordRoleID;

    UDiscordRoleEntitlement();

};

