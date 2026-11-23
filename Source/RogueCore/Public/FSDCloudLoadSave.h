#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SDCloudFailedDelegate.h"
#include "SDCloudLoadDelegate.h"
#include "FSDCloudLoadSave.generated.h"

class UFSDCloudSaveHandler;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDCloudLoadSave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDCloudSaveHandler* CloudSaveHandler;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDCloudLoad OnCloudLoadAll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDCloudFailed OnCloudLoadAllFailed;
    
public:
    UFSDCloudLoadSave();

};

