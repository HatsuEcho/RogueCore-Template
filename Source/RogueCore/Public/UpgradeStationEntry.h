#pragma once
#include "CoreMinimal.h"
#include "UpgradeStationEntry.generated.h"

class APlayerCharacter;
class UBXEUnlockBase;

USTRUCT(BlueprintType)
struct FUpgradeStationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBXEUnlockBase> upgrade;
    
    ROGUECORE_API FUpgradeStationEntry();
};

