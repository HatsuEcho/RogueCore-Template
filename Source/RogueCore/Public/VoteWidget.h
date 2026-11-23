#pragma once
#include "CoreMinimal.h"
#include "VoteData.h"
#include "VoteOptionInstance.h"
#include "VoteParticipant.h"
#include "WindowWidget.h"
#include "VoteWidget.generated.h"

class UVoteParticipantComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UVoteWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVoteParticipantComponent> participant;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteData VoteData;

    UVoteWidget();

protected:
    UFUNCTION(BlueprintCallable)
    bool Vote(int32 InVoteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVotingCompleted(int32 InWinningIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVoteOptionsChanged(const TArray<FVoteOptionInstance>& InVoteOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTimerStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveParticipantsChanged(const TArray<FVoteParticipant>& InParticipants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoteFinishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVotedBy(int32 OptionIndex, TArray<FString>& OutVotedByNames, int32& OutMaxVotes);
    
};

