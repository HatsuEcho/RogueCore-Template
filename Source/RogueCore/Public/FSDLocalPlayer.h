#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "FSDLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UFSDLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UFSDLocalPlayer();

};

