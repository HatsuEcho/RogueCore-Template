#pragma once
#include "CoreMinimal.h"
#include "ElectroBeam.h"
#include "SentryElectroBeam.generated.h"

class ARedeployableSentryGun;

UCLASS(Blueprintable)
class ROGUECORE_API ASentryElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARedeployableSentryGun*> Sentries;

    ASentryElectroBeam(const FObjectInitializer& ObjectInitializer);

};

