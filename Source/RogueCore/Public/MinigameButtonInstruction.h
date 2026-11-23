#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameButtonInstruction.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMinigameButtonInstruction : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameButtonInstruction();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(const UTexture2D* Texture);
    
};

