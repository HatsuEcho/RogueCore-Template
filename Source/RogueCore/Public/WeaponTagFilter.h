#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "WeaponTagFilter.generated.h"

class UWeaponTagBase;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWeaponTagFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> Tags;
    
    UWeaponTagFilter();

};

