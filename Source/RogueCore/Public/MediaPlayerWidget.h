#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Blueprint/UserWidget.h"
#include "EVolumeType.h"
#include "MediaPlayerWidget.generated.h"

class UBinkMediaTexture;
class UImage;
class UMediaPlayerWidget;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMediaPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMediaPlayerEvent, UMediaPlayerWidget*, InPlayerWidget);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsActive;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* OutputImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* MediaTexture;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVolumeType VolumeCategory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaPlayerEvent OnEndReached;
    
public:
    UMediaPlayerWidget();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(const bool IsPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieTexture(UBinkMediaTexture* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieSize(const FVector2f NewSize);
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
private:
    UFUNCTION(BlueprintCallable)
    void Callback_MediaEndReached();
    
    UFUNCTION(BlueprintCallable)
    void Callback_MediaClosed();
    
};

