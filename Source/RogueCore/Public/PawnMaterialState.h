#pragma once
#include "CoreMinimal.h"
#include "EPawnMaterialMode.h"
#include "NamedSlotMaterial.h"
#include "PawnMaterialState.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPawnMaterialState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnMaterialMode MaterialMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    ROGUECORE_API FPawnMaterialState();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedSlotMaterial> NamedSlotMaterials;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideTransitionDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRevealing;

};

