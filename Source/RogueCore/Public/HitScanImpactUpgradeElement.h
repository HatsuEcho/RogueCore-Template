#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "HitScanImpactUpgradeElement.generated.h"

class UFXSystemAsset;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UHitScanImpactUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> ImpactParticle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> ImpactSound;

    UHitScanImpactUpgradeElement();

};

