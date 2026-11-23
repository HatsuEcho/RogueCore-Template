#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "RamrodHUDWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API URamrodHUDWidget : public UBaseHUDWidget {
    GENERATED_BODY()
public:
    URamrodHUDWidget();

};

