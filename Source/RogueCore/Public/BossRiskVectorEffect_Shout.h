#pragma once
#include "CoreMinimal.h"
#include "BossRiskVectorEffect.h"
#include "BossRiskVectorEffect_Shout.generated.h"

class UDialogDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class UBossRiskVectorEffect_Shout : public UBossRiskVectorEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* Shout;
    
public:
    UBossRiskVectorEffect_Shout();

};

