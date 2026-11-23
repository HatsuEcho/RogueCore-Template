#pragma once
#include "CoreMinimal.h"
#include "NamedSlotMaterial.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FNamedSlotMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Material;
    
    ROGUECORE_API FNamedSlotMaterial();
};

