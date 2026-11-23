#include "BXEBuildImport.h"

UBXEBuildImport::UBXEBuildImport() {
}

UBXEUnlockBase* UBXEBuildImport::ResolveUnlockByName(FName UnlockName) {
    return NULL;
}

bool UBXEBuildImport::ParseUnlockReportFile(const FString& FilePath, TArray<FBXEImportedBuild>& OutBuilds) {
    return false;
}

FString UBXEBuildImport::GetImportedBuildSummary(const FBXEImportedBuild& Build) {
    return TEXT("");
}

bool UBXEBuildImport::ApplyImportedBuildToLocalPlayer(const UObject* WorldContext, const FBXEImportedBuild& Build, bool bReplaceExisting) {
    return false;
}


