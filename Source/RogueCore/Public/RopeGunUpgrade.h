#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "RopeGunUpgrade.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class URopeGunUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> ReleaseStatusEffects;
    
public:
    URopeGunUpgrade();

};

