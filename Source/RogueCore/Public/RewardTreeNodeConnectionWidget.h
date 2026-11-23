#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RewardTreeNodeConnectionWidget.generated.h"

class UCanvasPanel;
class URewardTreeNodeWidget;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API URewardTreeNodeConnectionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardTreeNodeWidget* Node1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardTreeNodeWidget* Node2;

    URewardTreeNodeConnectionWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(UCanvasPanel* Canvas, URewardTreeNodeWidget* InNode1, URewardTreeNodeWidget* InNode2);
    
};

