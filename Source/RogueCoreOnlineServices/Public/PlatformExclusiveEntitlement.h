#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=EFSDTargetPlatform -FallbackName=EFSDTargetPlatform
#include "BaseEntitlement.h"
#include "PlatformExclusiveEntitlement.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UPlatformExclusiveEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDTargetPlatform AllowedPlatforms;
    
    UPlatformExclusiveEntitlement();

};

