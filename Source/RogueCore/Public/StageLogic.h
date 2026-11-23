#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "StructUtils/InstancedStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "StageLogic.generated.h"

class UMutator;


UCLASS(Blueprintable)
class ROGUECORE_API UStageLogic : public UObject {
    GENERATED_BODY()
public:
    UStageLogic();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyTrickle(const FInstancedStruct& InContext);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMutator* SourceMutator;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMutator* GetSourceMutator() const;

};

