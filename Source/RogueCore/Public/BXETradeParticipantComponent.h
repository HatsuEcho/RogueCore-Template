#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "BXETradeData.h"
#include "DelegateDelegate.h"
#include "BXETradeParticipantComponent.generated.h"

class AFSDPlayerState;
class UBXETradeWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXETradeParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnTradeDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXETradeData TradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXETradeWidget* TradeWidget;
    
public:
    UBXETradeParticipantComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_GiveUnlock(int32 InOfferIndex, AFSDPlayerState* InReceiver);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Abstain();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTradeData(const FBXETradeData& InData);
    
};

