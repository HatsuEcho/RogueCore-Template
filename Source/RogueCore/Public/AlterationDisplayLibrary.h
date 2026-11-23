#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlterationDisplayLibrary.generated.h"

class UPrimaryMutator;
class URun;
class UStage;
class UTexture2D;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable)
class ROGUECORE_API UAlterationDisplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAlterationDisplayLibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowStageAlteration(UUserWidget* StageWidget, URun* Run, int32 StageIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ShowRevealedStageAlteration(UVerticalBox* EntriesBox, UStage* Stage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPrimaryMutator* GetStageAlteration(URun* Run, int32 StageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPrimaryMutator* GetRunAlterationForDisplay(URun* Run);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPrimaryMutator* GetRevealedStageAlteration(UStage* Stage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAlterationTitle(const UPrimaryMutator* Alteration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetAlterationIcon(const UPrimaryMutator* Alteration);
    
};

