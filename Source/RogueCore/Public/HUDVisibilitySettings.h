#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GVisibilityGroups.h"
#include "HUDVisibilitySettings.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UHUDVisibilitySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGVisibilityGroups VisibilityGroups;
    
    UHUDVisibilitySettings();

};

