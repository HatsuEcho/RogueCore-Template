#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFSDTargetPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=EFSDTargetPlatform -FallbackName=EFSDTargetPlatform
#include "EFSDAchievementType.h"
#include "AchievementAsset.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UAchievementAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, FString> PlatformAchievementIDMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, FString> PlatformStatIDMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AchievementTargetValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDAchievementType AchievementType;

    UAchievementAsset();

};

