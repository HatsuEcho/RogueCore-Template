#pragma once
#include "CoreMinimal.h"
#include "BXENegotiationData.h"
#include "BXENegotiationParticipant.h"
#include "BXEUnlockInstance.h"
#include "ItemSlotIndex.h"
#include "WindowWidget.h"
#include "BXENegotiationWidget.generated.h"

class UWidgetAnimation;


class AFSDPlayerState;
class APlayerState;
class UBXENegotiationParticipantComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBXENegotiationWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBXENegotiationParticipantComponent> participant;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXENegotiationData NegotiationData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance SelectedUnlock;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSlotIndex SelectedUnlockSlot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedUnlockIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedDroneUnlockIndex;

    UBXENegotiationWidget();

protected:
    UFUNCTION(BlueprintCallable)
    bool SelectUnlock(const FBXEUnlockInstance& InUnlock, FItemSlotIndex InUnlockSlot, int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SelectDroneUnlock(int32 InDroneUnlockIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUnlock(int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateUnlocks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnlockSelected(int32 InUnlockIndex, int32 InParticipantIndex, FBXEUnlockInstance InSelectedUnlock, bool InRerolled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTurnChanged(int32 InParticipantIndex, APlayerState* InParticipant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveParticipantsChanged(const TArray<FBXENegotiationParticipant>& InParticipants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCreateUnlocks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginSelectDroneUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNegotiationFinishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFSDPlayerState*> GetUnlockRequestedBy(int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMyTurnPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsItMyTurn() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntroPlaybackSpeed() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntroDuration(const UWidgetAnimation* Animation) const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestUnlock(int32 InUnlockIndex) const;

};

