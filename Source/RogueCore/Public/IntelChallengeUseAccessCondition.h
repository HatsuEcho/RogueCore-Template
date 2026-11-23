#pragma once
#include "CoreMinimal.h"
#include "IntelChallengePlayerMonitor.h"
#include "IntelChallengeUseAccessCondition.generated.h"

class UAccessCondition;
class UUsableComponentBase;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UIntelChallengeUseAccessCondition : public UIntelChallengePlayerMonitor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UUsableComponentBase*> UsableComponentsUsedInThisLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAccessCondition* RequiredAccess;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredUseAmount;

public:
    UIntelChallengeUseAccessCondition();

private:
    UFUNCTION(BlueprintCallable)
    void OnUsableTriggered(UUsableComponentBase* usable);
    
};

