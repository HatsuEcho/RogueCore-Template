#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "EDamageBonusType.h"
#include "ClipBasedDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UClipBasedDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageBonusType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertBonus;
    
    UClipBasedDamageBonus();

};

