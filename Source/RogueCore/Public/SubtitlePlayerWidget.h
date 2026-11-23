#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SubtitlePlayerTableRow.h"
#include "SubtitlePlayerWidget.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USubtitlePlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSubtitlePlayerTableRow> SubtitlesToShow;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextSubtitleIndex;

protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartDelay;
    
private:
    
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double PlaybackStartTime;
    
    
public:
    USubtitlePlayerWidget();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play(UDataTable* Subtitles);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyDisplaySubtitle(const FText& Text, const float TimeToShowInSeconds);
    
};

