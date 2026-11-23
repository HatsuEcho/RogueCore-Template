#pragma once
#include "CoreMinimal.h"
#include "PerkEffect.h"
#include "PerkEffectCreateComponent.generated.h"

class UPerkEffectComponent;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPerkEffectCreateComponent : public UPerkEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPerkEffectComponent> ComponentClass;

    UPerkEffectCreateComponent();

};

