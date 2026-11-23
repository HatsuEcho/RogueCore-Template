#pragma once
#include "CoreMinimal.h"
#include "ThrowableItem.h"
#include "HolidayThrowableItem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AHolidayThrowableItem : public AThrowableItem {
    GENERATED_BODY()
public:
    AHolidayThrowableItem(const FObjectInitializer& ObjectInitializer);

};

