#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ElementStateDelegateDelegate.h"
#include "ElementStateDelegates.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UElementStateDelegates : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementStateDelegate OnChanged;
    
    UElementStateDelegates();

};

