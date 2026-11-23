#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "BossRoomAmmoCrateMutator.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UBossRoomAmmoCrateMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    UBossRoomAmmoCrateMutator();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 ModifyBossRoomAmmoCrateCount(const UObject* WorldContextObject, int32 count);
    
};

