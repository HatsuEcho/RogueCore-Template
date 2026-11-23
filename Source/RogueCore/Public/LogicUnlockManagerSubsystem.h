#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "LogicUnlockManagerSubsystem.generated.h"

class UBXELogicUnlockComponent;

UCLASS(Blueprintable)
class ULogicUnlockManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXELogicUnlockComponent*> LogicUnlocks;
    
public:
    ULogicUnlockManagerSubsystem();

};

