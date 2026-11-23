#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "EBossRiskVectorEffectActivation.h"
#include "BossRiskVectorEffect.generated.h"

class UBossRiskVectorEffectsComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UBossRiskVectorEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossRiskVectorEffectActivation Activation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Signal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeBetweenPhases;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBossRiskVectorEffectsComponent* Component;
    
public:
    UBossRiskVectorEffect();

protected:
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetSignalOptions();
    
};

