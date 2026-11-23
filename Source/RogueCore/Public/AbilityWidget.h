#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "AbilityWidget.generated.h"

class UAbilityData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UAbilityWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityData* AbilityData;

    UAbilityWidget();

};

