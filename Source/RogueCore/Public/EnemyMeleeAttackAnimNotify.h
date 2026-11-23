#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EnemyMeleeAttackAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ROGUECORE_API UEnemyMeleeAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTag;

    UEnemyMeleeAttackAnimNotify();

};

