#pragma once
#include "CoreMinimal.h"
#include "BXEImportedUnlock.generated.h"

USTRUCT(BlueprintType)
struct FBXEImportedUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AttributeNames;
    
    ROGUECORE_API FBXEImportedUnlock();
};

