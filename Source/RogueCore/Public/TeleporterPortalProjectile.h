#pragma once
#include "CoreMinimal.h"
#include "ThrowableActor.h"
#include "TeleporterPortalProjectile.generated.h"

class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ATeleporterPortalProjectile : public AThrowableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphere;
    
public:
    ATeleporterPortalProjectile(const FObjectInitializer& ObjectInitializer);

};

