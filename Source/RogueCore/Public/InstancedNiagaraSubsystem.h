#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "InstancedNiagaraSubsystem.generated.h"

class UInstancedNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class ROGUECORE_API UInstancedNiagaraSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraSystem*, UInstancedNiagaraComponent*> SystemToComponent;

    UInstancedNiagaraSubsystem();

    UFUNCTION(BlueprintCallable)
    void SpawnSystemAtLocation(UNiagaraSystem* InSystem, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEmittersAtLocation(UNiagaraSystem* InSystem, const TArray<int32>& InEmitterIndex, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInstancingSetUpForSystem(UNiagaraSystem* InSystem);
    
};

