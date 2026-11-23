#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "Templates/SubclassOf.h"
#include "TutorialContentWidget.generated.h"

class UTutorialContentWidget;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UTutorialContentWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialFinished, UTutorialContentWidget*, TutorialWidget);

    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialFinished OnTutorialFinished;
    
    UTutorialContentWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveWidget();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDismissed;

    UFUNCTION(BlueprintCallable)
    void ShowNextTutorial(TSubclassOf<UTutorialContentWidget> NextTutorial);

};

