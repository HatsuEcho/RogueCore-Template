#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=EFSDTargetPlatform -FallbackName=EFSDTargetPlatform
#include "AdvertisedEntitlement.h"
#include "PlatformStoreEntitlement.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UPlatformStoreEntitlement : public UAdvertisedEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, FString> PlatformToIdMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnnounceOnStart;

    UPlatformStoreEntitlement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlatformID(FString& idOut) const;
    
};

