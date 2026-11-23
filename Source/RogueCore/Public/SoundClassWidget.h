#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SoundClassWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API USoundClassWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USoundClassWidget();

};

