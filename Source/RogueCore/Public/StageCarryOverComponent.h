#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "StageCarryOverEventDelegate.h"
#include "StageCarryOverRide.h"
#include "StageCarryOverComponent.generated.h"

class AFSDGameState;
class ATeamTransport;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UStageCarryOverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCarryOverEvent OnLeavingWithTransport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCarryOverEvent OnArrivedInNextStage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsideCheckDownwardExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Ride, meta=(AllowPrivateAccess=true))
    FStageCarryOverRide Ride;
    
public:
    UStageCarryOverComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnTransportLanded(ATeamTransport* Transport);
    
    UFUNCTION(BlueprintCallable)
    void OnTransportDeparting(ATeamTransport* Transport);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Ride(const FStageCarryOverRide& OldRide);
    
    UFUNCTION(BlueprintCallable)
    void OnNewGameState(AFSDGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRidingTransport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeavingStage() const;
    
};

