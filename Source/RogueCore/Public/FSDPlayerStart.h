#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDPlayerStart.generated.h"

class AFSDPlayerController;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class ROGUECORE_API AFSDPlayerStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* PrefferedClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* UsedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDropPodLandingSkipSpot;
    
    AFSDPlayerStart(const FObjectInitializer& ObjectInitializer);

};

