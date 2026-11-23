#pragma once
#include "CoreMinimal.h"
#include "GeneratorLine.h"
#include "FacilityGeneratorLine.generated.h"

class ATetherStation;

UCLASS(Blueprintable)
class ROGUECORE_API AFacilityGeneratorLine : public AGeneratorLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATetherStation* Station;

    AFacilityGeneratorLine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPathFinding();
    
};

