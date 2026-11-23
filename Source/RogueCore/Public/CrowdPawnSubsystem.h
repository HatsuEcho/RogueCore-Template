#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "CrowdPawnSubsystem.generated.h"

class ACrowdPawn;
class UCrowdPawnSettings;

UCLASS(Blueprintable)
class ROGUECORE_API UCrowdPawnSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACrowdPawn*> AllCrowdPawns;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrowdPawnSettings* CrowdPawnSettings;

public:
    UCrowdPawnSubsystem();

};

