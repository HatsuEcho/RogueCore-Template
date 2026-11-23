#pragma once
#include "CoreMinimal.h"
#include "AvoidActorEntry.h"
#include "GrabAvoidClassEntry.h"
#include "GrabberComponent.h"
#include "FakePhysGrabberComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFakePhysGrabberComponent : public UGrabberComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAvoidActorEntry> ActorsToAvoid;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrabAvoidClassEntry> ActorTypesToAvoid;

public:
    UFakePhysGrabberComponent(const FObjectInitializer& ObjectInitializer);

};

