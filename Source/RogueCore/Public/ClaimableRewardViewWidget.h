#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ClaimableRewardView.h"
#include "ClaimableRewardViewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UClaimableRewardViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardView Data;

    UClaimableRewardViewWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginFlow();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndRewardFlow();
    
    UFUNCTION(BlueprintCallable)
    void BeginRewardFlow(FClaimableRewardView InViewData);
    
};

