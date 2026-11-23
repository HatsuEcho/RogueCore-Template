#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "BXEUnlockInstance.h"
#include "BXETradeEntryWidget.generated.h"

class AFSDPlayerState;
class UBXETradeEntryWidget;
class UBorder;
class UButton;
class UImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBXETradeEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTradeEntryDelegate, UBXETradeEntryWidget*, InEntry);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradeEntryDelegate OnEntryClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradeEntryDelegate OnEntryHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradeEntryDelegate OnEntryUnhovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NeutralAccentColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedFrameColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IdleFrameColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OfferIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntryEnabled;
    
public:
    UBXETradeEntryWidget();

    UFUNCTION(BlueprintCallable)
    void SetUnlock(const FBXEUnlockInstance& InUnlock, int32 InOfferIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitle(const FText& InSubtitle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayer(AFSDPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryEnabled(bool InEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSelectedChanged(bool InSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEntryChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEnabledChanged(bool InEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntryEnabled() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBXEUnlockInstance GetUnlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOfferIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAccentColor() const;
    
};

