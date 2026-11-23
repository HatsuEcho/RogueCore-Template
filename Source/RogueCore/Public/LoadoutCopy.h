#pragma once
#include "CoreMinimal.h"
#include "CharacterLoadout.h"
#include "LoadoutCopy.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutCopy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLoadout Loadout;
    
    ROGUECORE_API FLoadoutCopy();
};

