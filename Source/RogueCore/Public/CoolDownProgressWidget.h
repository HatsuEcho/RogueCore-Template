#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoolDownProgressStyle.h"
#include "CoolDownProgressWidget.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UCoolDownProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle Style;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> CoolDownObject;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressDoneAtNumber;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;

    UCoolDownProgressWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitWidget();
    
    UFUNCTION(BlueprintCallable)
    void Init(UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle);
    
};

