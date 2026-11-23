#pragma once
#include "CoreMinimal.h"
#include "ERunBossType.h"
#include "RiskVector.h"
#include "BossRiskVector.generated.h"

class UBossRiskVectorEffect;
class UTexture2D;

UCLASS(Blueprintable)
class UBossRiskVector : public URiskVector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBossRiskVectorEffect*> BossEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunBossType, UTexture2D*> BossHeaderOverrides;
    
public:
    UBossRiskVector();

};

