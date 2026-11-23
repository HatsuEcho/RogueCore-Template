#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "GliderAnimSync.h"
#include "GliderBeastAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UGliderBeastAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncAnimLength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGliderAnimSync AnimSync;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFrozen;

    UGliderBeastAnimInstance();

};

