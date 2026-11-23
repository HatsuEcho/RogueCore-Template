#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotifyState_AnimSequence.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UAnimNotifyState_AnimSequence : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyName;

public:
    UAnimNotifyState_AnimSequence();

};

