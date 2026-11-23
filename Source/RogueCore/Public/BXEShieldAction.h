#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEShieldAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBXEShieldAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapacityAddition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenFactorAddition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DegredationRateAddition;

    UBXEShieldAction();

};

