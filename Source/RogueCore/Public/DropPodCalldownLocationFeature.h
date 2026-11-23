#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "RoomFeature.h"
#include "Templates/SubclassOf.h"
#include "ECalldownLocationType.h"
#include "DropPodCalldownLocationFeature.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDropPodCalldownLocationFeature : public URoomFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CalldownClass;

    UDropPodCalldownLocationFeature();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalldownLocationType CalldownLocationType;

};

