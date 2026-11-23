#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "SaveGameIDInterface.h"
#include "SavableDataAsset.generated.h"

class UBuildRestriction;

UCLASS(Blueprintable)
class ROGUECORE_API USavableDataAsset : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDangerousSaveGameIDEditing;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildRestriction* BuildRestriction;

    USavableDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSaveGameID() const;
    

    // Fix for true pure virtual functions not being implemented
};

