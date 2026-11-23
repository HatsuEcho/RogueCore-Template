#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Aquisitionable.generated.h"

class IAquisitionSource;
class UAquisitionSource;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ROGUECOREUTILS_API UAquisitionable : public UInterface {
    GENERATED_BODY()
};

class IAquisitionable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TScriptInterface<IAquisitionSource> GetAquisitionSource() const PURE_VIRTUAL(GetAquisitionSource, return NULL;);
    
};

