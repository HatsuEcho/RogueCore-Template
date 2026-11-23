#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "FireWeaponSoundUpgradeElement.generated.h"

class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UFireWeaponSoundUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> FireSound;

    UFireWeaponSoundUpgradeElement();

};

