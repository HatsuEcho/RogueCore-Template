#pragma once
#include "CoreMinimal.h"
#include "PickaxeItem.h"
#include "PickaxeWeapon.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API APickaxeWeapon : public APickaxeItem {
    GENERATED_BODY()
public:
    APickaxeWeapon(const FObjectInitializer& ObjectInitializer);

};

