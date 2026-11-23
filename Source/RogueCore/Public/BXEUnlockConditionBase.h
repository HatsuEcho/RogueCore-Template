#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BXEUnlockConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class ROGUECORE_API UBXEUnlockConditionBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertResult;

public:
    UBXEUnlockConditionBase();

};

