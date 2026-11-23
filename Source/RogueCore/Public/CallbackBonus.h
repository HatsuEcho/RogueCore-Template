#pragma once
#include "CoreMinimal.h"
#include "CallbackBonusDelegateDelegate.h"
#include "DamageBonusBase.h"
#include "CallbackBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UCallbackBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallbackBonusDelegate Callback;

    UCallbackBonus();

};

