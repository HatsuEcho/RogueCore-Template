#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DelegateDelegate.h"
#include "WindowWidget.h"
#include "WorkbenchWindowWidget.generated.h"

class UUnlockCollectionTag;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWorkbenchWindowWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnUpgradeSelected;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* WorkbenchCollectionTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpgradeSelected;

    UWorkbenchWindowWidget();

};

