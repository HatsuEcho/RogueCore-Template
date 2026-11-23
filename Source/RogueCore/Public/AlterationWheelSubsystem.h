#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "AlterationWheelData.h"
#include "AlterationWheelSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UAlterationWheelSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlterationWheelData ActiveWheel;
    
public:
    UAlterationWheelSubsystem();

};

