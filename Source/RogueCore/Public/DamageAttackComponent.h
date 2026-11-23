#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "DamageAttackComponent.generated.h"

class UDamageAsset;
class UDamageComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UDamageAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* AttackDamage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;

    UDamageAttackComponent(const FObjectInitializer& ObjectInitializer);

};

