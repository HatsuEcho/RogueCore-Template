#pragma once
#include "CoreMinimal.h"
#include "BossLivingShieldKillBeam.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FBossLivingShieldKillBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Beam;
    
    ROGUECORE_API FBossLivingShieldKillBeam();
};

