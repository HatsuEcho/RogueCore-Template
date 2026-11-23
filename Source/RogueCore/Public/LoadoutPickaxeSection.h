#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPickaxePartLocation.h"
#include "LoadoutPickaxeSection.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutPickaxeSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FGuid> Parts;
    
    ROGUECORE_API FLoadoutPickaxeSection();
};

