#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "UnlockRerollHealthBoostRequest.h"
#include "UnlockRerollHealthBoostResponse.h"
#include "UnlockRerollRequest.h"
#include "UnlockRerollResponse.h"
#include "UnlockRerollParticipantComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUnlockRerollParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnlockRerollResponseDelegate, const FUnlockRerollResponse&, Response);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnlockRerollHealthBoostResponseDelegate, const FUnlockRerollHealthBoostResponse&, Response);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockRerollResponseDelegate OnServerRerollResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockRerollHealthBoostResponseDelegate OnServerHealthBoostResponse;
    
    UUnlockRerollParticipantComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestReroll(const FUnlockRerollRequest& Request);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestHealthBoost(const FUnlockRerollHealthBoostRequest& Request);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRerollResponse(const FUnlockRerollResponse& Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRerollHealthBoostResponse(const FUnlockRerollHealthBoostResponse& Response);
    
};

