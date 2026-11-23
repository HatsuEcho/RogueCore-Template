#pragma once
#include "CoreMinimal.h"
#include "ECharacterState.h"
#include "EffectTriggerCondition.h"
#include "CharacterStateEffectCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCharacterStateEffectCondition : public UEffectTriggerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState TargetState;

public:
    UCharacterStateEffectCondition();

};

