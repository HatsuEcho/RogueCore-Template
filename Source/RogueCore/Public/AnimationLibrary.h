#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimationLibrary.generated.h"

UCLASS(Blueprintable, meta=(ScriptName="RogueCoreAnimationLibrary"))
class ROGUECORE_API UAnimationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationLibrary();

};

