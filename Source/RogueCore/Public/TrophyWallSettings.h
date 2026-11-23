#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "TrophyWallSettings.generated.h"

class UTrophySheet;
class UTrophyWallMenuWidget;

UCLASS(Blueprintable)
class ROGUECORE_API UTrophyWallSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrophySheet*> TrophySheets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTrophyWallMenuWidget> MenuClass;
    
public:
    UTrophyWallSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTrophySheet*> GetTrophySheets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrophySheet* GetPrimaryTrophySheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UTrophyWallMenuWidget> GetMenuClass() const;
    
};

