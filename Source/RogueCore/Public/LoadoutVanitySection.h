#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "CharacterVanityLoadout.h"
#include "LoadoutVanitySection.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutVanitySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterVanityLoadout Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid VictoryPose;
    
    ROGUECORE_API FLoadoutVanitySection();
};

