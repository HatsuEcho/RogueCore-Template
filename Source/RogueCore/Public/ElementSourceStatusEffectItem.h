#pragma once
#include "CoreMinimal.h"
#include "EElementSourceIntensity.h"
#include "StatusEffectItem.h"
#include "ElementSourceStatusEffectItem.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UElementSourceStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElementSourceIntensity Intensity;

    UElementSourceStatusEffectItem();

};

