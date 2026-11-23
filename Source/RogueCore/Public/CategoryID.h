#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "SaveGameIDInterface.h"
#include "CategoryID.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UCategoryID : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;

    UCategoryID();


    // Fix for true pure virtual functions not being implemented
};

