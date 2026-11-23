#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BXEImportedBuild.h"
#include "BXEBuildImport.generated.h"

class UBXEUnlockBase;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEBuildImport : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBXEBuildImport();

    UFUNCTION(BlueprintCallable)
    static UBXEUnlockBase* ResolveUnlockByName(FName UnlockName);
    
    UFUNCTION(BlueprintCallable)
    static bool ParseUnlockReportFile(const FString& FilePath, TArray<FBXEImportedBuild>& OutBuilds);
    
    UFUNCTION(BlueprintCallable)
    static FString GetImportedBuildSummary(const FBXEImportedBuild& Build);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool ApplyImportedBuildToLocalPlayer(const UObject* WorldContext, const FBXEImportedBuild& Build, bool bReplaceExisting);
    
};

