#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ActivationOjective.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UActivationOjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectivesFound, meta=(AllowPrivateAccess=true))
    int32 ObjectivesFound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectivesToFind, meta=(AllowPrivateAccess=true))
    int32 ObjectivesToFind;

    UActivationOjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesToFind(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesFound(int32 prevAmount);
    
};

