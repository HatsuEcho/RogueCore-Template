#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EDebrisCarvedType.h"
#include "VeinResource.h"
#include "ProceduralVeinsComponent.generated.h"

class AProceduralSetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UProceduralVeinsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVeinResource> VeinResources;

    UProceduralVeinsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateResourceVeins_Async(UPARAM(ref) const AProceduralSetup* Setup, FLatentActionInfo LatentInfo);

    UFUNCTION(BlueprintCallable)
    void GenerateResourceVeins();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateMissingResourceVeins_Async(UPARAM(ref) const AProceduralSetup* Setup, FLatentActionInfo LatentInfo);

    UFUNCTION(BlueprintCallable)
    void GenerateMissingResourceVeins();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateDebrisVeins_Async(UPARAM(ref) const AProceduralSetup* Setup, EDebrisCarvedType CarverType, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDebrisVeins(EDebrisCarvedType CarverType);
    
    UFUNCTION(BlueprintCallable)
    void CountGeneratedResourcesInVeins();
    
    UFUNCTION(BlueprintCallable)
    void CountFinalGeneratedResourcesInVeins();
    
    UFUNCTION(BlueprintCallable)
    void CalculateResourceDistribution();
    
};

