#pragma once
#include "CoreMinimal.h"
#include "BossMutator.h"
#include "BossAmplificationMutator.generated.h"

class UPawnStat;

UCLASS(Blueprintable, EditInlineNew)
class UBossAmplificationMutator : public UBossMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValuePerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyOnFirstPhase;
    
    UBossAmplificationMutator();

};

