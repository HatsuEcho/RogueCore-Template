#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "TeleporterManager.generated.h"

class ATeleporterPortalItem;

UCLASS(Blueprintable)
class UTeleporterManager : public UObject {
    GENERATED_BODY()
public:
    UTeleporterManager();

    UFUNCTION(BlueprintCallable)
    int32 GetColorPairIndex(const ATeleporterPortalItem* InTeleporter);
    
};

