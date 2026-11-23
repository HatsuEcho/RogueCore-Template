#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "CritDamageBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UCritDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalCritDamagePercent;

    UCritDamageBonus();

    UFUNCTION(BlueprintCallable)
    void SetAdditionalCritDamagePercent(const float NewPercent);
    
};

