#pragma once
#include "CoreMinimal.h"
#include "BXEImportedUnlock.h"
#include "BXEImportedBuild.generated.h"

USTRUCT(BlueprintType)
struct FBXEImportedBuild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEImportedUnlock> Unlocks;
    
    ROGUECORE_API FBXEImportedBuild();
};

