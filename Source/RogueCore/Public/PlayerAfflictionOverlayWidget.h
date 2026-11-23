#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Blueprint/UserWidget.h"
#include "PlayerAfflictionOverlayWidget.generated.h"

class UPlayerAfflictionOverlay;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPlayerAfflictionOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayActive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAfflictionOverlay* Overlay;

    UPlayerAfflictionOverlayWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndOverlay();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlay(UPlayerAfflictionOverlay* InOverlay);
    
};

