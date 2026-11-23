#pragma once
#include "CoreMinimal.h"
#include "PerkEffect.h"
#include "PerkEffectEscapeGrabber.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPerkEffectEscapeGrabber : public UPerkEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EnemyGrabberClass;

    UPerkEffectEscapeGrabber();

};

