#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "ImpactDuplicationUnlockComponent.generated.h"

class AGrenade;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UImpactDuplicationUnlockComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UImpactDuplicationUnlockComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnGrenadeThrown(AGrenade* Grenade, APlayerCharacter* Thrower);
    
};

