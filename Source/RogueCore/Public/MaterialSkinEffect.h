#pragma once
#include "CoreMinimal.h"
#include "SkinEffect.h"
#include "MaterialSkinEffect.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMaterialSkinEffect : public USkinEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;

    UMaterialSkinEffect();

};

