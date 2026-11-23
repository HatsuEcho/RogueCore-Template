#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SentryAttachment.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ASentryAttachment : public AActor {
    GENERATED_BODY()
public:
    ASentryAttachment(const FObjectInitializer& ObjectInitializer);

};

