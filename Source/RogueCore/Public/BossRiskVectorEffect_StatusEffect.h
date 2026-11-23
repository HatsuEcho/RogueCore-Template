#pragma once
#include "CoreMinimal.h"
#include "BossRiskVectorEffect.h"
#include "Templates/SubclassOf.h"
#include "BossRiskVectorEffect_StatusEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UBossRiskVectorEffect_StatusEffect : public UBossRiskVectorEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UBossRiskVectorEffect_StatusEffect();

};

