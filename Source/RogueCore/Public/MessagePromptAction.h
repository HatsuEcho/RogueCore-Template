#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MessagePromptSettings.h"
#include "MessagePromptAction.generated.h"

class UMessagePromptAction;
class UMessagePromptWidget;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UMessagePromptAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMessagePromptActionDelegate);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMessagePromptSettings PromptSettings;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMessagePromptWidget> PromptWidget;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessagePromptActionDelegate OnAcknowledged;

    
public:
    UMessagePromptAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UMessagePromptAction* PromptMessageAcknowledge(UObject* WorldContext, const FMessagePromptSettings Prompt);
    
};

