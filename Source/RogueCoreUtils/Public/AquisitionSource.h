#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AquisitionSource.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ROGUECOREUTILS_API UAquisitionSource : public UInterface {
    GENERATED_BODY()
};

class IAquisitionSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag GetAquisitionSourceTag() const PURE_VIRTUAL(GetAquisitionSourceTag, return FGameplayTag{};);
    
};

