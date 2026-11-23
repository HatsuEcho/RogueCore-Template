#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "BXETradeData.h"
#include "DelegateDelegate.h"
#include "BXETradeManager.generated.h"

class URunManager;

UCLASS(Blueprintable)
class ROGUECORE_API UBXETradeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnTradeDone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URunManager* RunManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXETradeData TradeData;
    
public:
    UBXETradeManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartTrade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStageExitTrade() const;
    
};

