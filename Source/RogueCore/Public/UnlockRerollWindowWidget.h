#pragma once
#include "CoreMinimal.h"
#include "UnlockRerollSetup.h"
#include "WindowWidget.h"
#include "UnlockRerollWindowWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUnlockRerollWindowWidget : public UWindowWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUnlockRerollSetup RerollSetup;
    
public:
    UUnlockRerollWindowWidget();

    UFUNCTION(BlueprintCallable)
    void SetRerollSetup(const FUnlockRerollSetup& NewWidgetSetup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUnlockRerollSetup GetRerollSetup() const;
    
};

