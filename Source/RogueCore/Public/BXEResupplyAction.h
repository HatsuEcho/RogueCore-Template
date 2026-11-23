#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEResupplyAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBXEResupplyAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResupplyPercent;

    UBXEResupplyAction();

};

