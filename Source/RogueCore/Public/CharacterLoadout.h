#pragma once
#include "CoreMinimal.h"
#include "LoadoutGearSection.h"
#include "LoadoutPickaxeSection.h"
#include "LoadoutVanitySection.h"
#include "CharacterLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutGearSection Gear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutPickaxeSection Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutVanitySection Vanity;
    
    ROGUECORE_API FCharacterLoadout();
};

