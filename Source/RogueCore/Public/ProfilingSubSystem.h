#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ProfileCategoryTiming.h"
#include "ProfileEntry.h"
#include "ProfilingSubSystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UProfilingSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProfileEntry> Entries;

    UProfilingSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProfileEntry> GetEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProfileCategoryTiming> GetCategoryTimings() const;
    
};

