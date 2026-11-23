#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FSDCloudSaveHandler.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFSDCloudSaveHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedSaves;

public:
    UFSDCloudSaveHandler();

};

