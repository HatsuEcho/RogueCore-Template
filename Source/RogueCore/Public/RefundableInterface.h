#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "SaveGameIDInterface.h"
#include "RefundableInterface.generated.h"

UINTERFACE()
class ROGUECORE_API URefundableInterface : public USaveGameIDInterface {
    GENERATED_BODY()
};

class IRefundableInterface : public ISaveGameIDInterface {
    GENERATED_BODY()
public:
};

