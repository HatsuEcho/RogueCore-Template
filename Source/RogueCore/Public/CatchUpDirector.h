#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "CatchUpNegotiation.h"
#include "CatchUpDirector.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ACatchUpDirector : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FastNegotiations, meta=(AllowPrivateAccess=true))
    bool bFastNegotiations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCatchUpNegotiation> PendingNegotiations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCatchUpNegotiation ActiveNegotiation;
    
public:
    ACatchUpDirector(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnStageVoteDone();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FastNegotiations();
    
    UFUNCTION(BlueprintCallable)
    void OnCatchUpNegotiationDone();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_FadeFromBlack();
    
};

