#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EFSDTargetPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=EFSDTargetPlatform -FallbackName=EFSDTargetPlatform
#include "EntitlementSettings.generated.h"

class UBaseEntitlement;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UEntitlementSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBaseEntitlement*> EntitlementList;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, UBaseEntitlement*> PlatformFollowEntitlements;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenQueries;

    UEntitlementSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseEntitlement* GetPlatformFollowEntitlement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UBaseEntitlement*> GetAllEntitlements() const;
    
};

