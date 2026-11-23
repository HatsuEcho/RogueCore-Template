#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
#include "ECarveFilterType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=EPreciousMaterialOptions -FallbackName=EPreciousMaterialOptions
#include "EPreciousMaterialOptions.h"
#include "CarveDoneDelegateDelegate.h"
#include "AutoCarverComponent.generated.h"

class UTerrainMaterialBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAutoCarverComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpensiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions PreciousMaterialAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarveDoneDelegate OnCarveDoneEvent;
    
    UAutoCarverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceCarve();
    
};

