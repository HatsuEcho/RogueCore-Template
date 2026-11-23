#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CursorPositionUpdatedDelegate.h"
#include "PlayerCursorWidget.generated.h"

class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPlayerCursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorPositionUpdated OnCursorPositionUpdated;

    UPlayerCursorWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnregisterCursor(AFSDPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterCursor(AFSDPlayerState* PlayerState);
    
};

