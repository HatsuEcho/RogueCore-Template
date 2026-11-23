#pragma once
#include "CoreMinimal.h"
#include "TemporaryBuff.h"
#include "RandomLoadoutBuff.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URandomLoadoutBuff : public UTemporaryBuff {
    GENERATED_BODY()
public:
    URandomLoadoutBuff();

};

