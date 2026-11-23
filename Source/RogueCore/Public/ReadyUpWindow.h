#pragma once
#include "CoreMinimal.h"
#include "ReadyUpState.h"
#include "WindowWidget.h"
#include "ReadyUpWindow.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UReadyUpWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyUpState State;

    UReadyUpWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStageChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParticipantStateChanged();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParticipantCountChanged();

};

