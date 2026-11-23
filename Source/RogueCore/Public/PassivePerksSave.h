#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "PassivePerksSave.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FPassivePerksSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PerkIDs;
    
public:
    FPassivePerksSave();
};

