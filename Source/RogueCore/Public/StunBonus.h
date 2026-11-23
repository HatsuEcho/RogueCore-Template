#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "StunBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UStunBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UStunBonus();

};

