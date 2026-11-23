#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDLevelLoadingPersistentWidget.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UFSDLevelLoadingPersistentWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AllowRemoveFromParent;

public:
    UFSDLevelLoadingPersistentWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFadeProgress(float Fade, UTexture* LoadingImage);
    
};

