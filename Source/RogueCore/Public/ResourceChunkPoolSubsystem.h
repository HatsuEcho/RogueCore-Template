#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "ResourceChunkPoolSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UResourceChunkPoolSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PrewarmClasses;
    
public:
    UResourceChunkPoolSubsystem();

};

