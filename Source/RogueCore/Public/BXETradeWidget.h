#pragma once
#include "CoreMinimal.h"
#include "BXETradeData.h"
#include "BXETradeGift.h"
#include "BXEUnlockInstance.h"
#include "Templates/SubclassOf.h"
#include "WindowWidget.h"
#include "BXETradeWidget.generated.h"

class AFSDPlayerState;
class UBXETradeEntryWidget;
class UBXETradeParticipantComponent;
class UButton;
class UPanelWidget;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBXETradeWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBXETradeParticipantComponent> Participant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* MyUpgradesBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TeammatesBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* AbstainButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InstructionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GiftsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* countdownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBXETradeEntryWidget> UnlockEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBXETradeEntryWidget> TeammateEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXETradeData TradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedOfferIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountdownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXETradeEntryWidget*> UnlockEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXETradeEntryWidget*> TeammateEntries;
    
public:
    UBXETradeWidget();

    UFUNCTION(BlueprintCallable)
    bool SelectUnlock(int32 InOfferIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTradeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTradeFinishing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSelectionChanged(int32 InOfferIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGiftReceived(const FBXETradeGift& InGift);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTradeFinishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedUnlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDecided() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUnlockEntryClicked(UBXETradeEntryWidget* InEntry);
    
    UFUNCTION(BlueprintCallable)
    void HandleTeammateEntryClicked(UBXETradeEntryWidget* InEntry);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbstainClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GiveSelectedUnlockTo(AFSDPlayerState* InTeammate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBXETradeData GetTradeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFSDPlayerState*> GetTeammates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBXEUnlockInstance GetSelectedUnlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedOfferIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBXEUnlockInstance> GetMyOffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBXETradeGift> GetMyGifts() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGiveSelectedUnlockTo(AFSDPlayerState* InTeammate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDecide() const;
    
    UFUNCTION(BlueprintCallable)
    bool Abstain();
    
};

