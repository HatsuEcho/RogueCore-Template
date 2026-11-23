#pragma once
#include "CoreMinimal.h"
#include "EPerkHUDActivationLocation.h"
#include "PerkHUDWidget.h"
#include "PerkActivationWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UPerkActivationWidget : public UPerkHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerkHUDActivationLocation Location;

    UPerkActivationWidget();

};

