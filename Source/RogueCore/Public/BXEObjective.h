#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "BXEObjective.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsObjectiveComplete;

    UBXEObjective(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void NotifyObjectiveComplete();
    
    UFUNCTION(BlueprintCallable)
    void NotifyObjectiveChanged();
    
};

