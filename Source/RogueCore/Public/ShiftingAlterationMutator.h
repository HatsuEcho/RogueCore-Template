#pragma once
#include "CoreMinimal.h"
#include "AlterationWheelSettings.h"
#include "Mutator.h"
#include "ShiftingAlterationMutator.generated.h"

class UAlterationListEntry;
class UPrimaryMutator;

UCLASS(Blueprintable, EditInlineNew)
class UShiftingAlterationMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShiftEachStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> ShiftPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelSettings WheelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAlterationListEntry> AlterationListEntryWidget;
    
public:
    UShiftingAlterationMutator();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimaryMutator*> GetShiftPool() const;
    
};

