#pragma once
#include "CoreMinimal.h"
#include "InputTranslation.h"
#include "InputTranslationTable.generated.h"

USTRUCT(BlueprintType)
struct FInputTranslationTable {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInputTranslation> Entries;
    
public:
    ROGUECORE_API FInputTranslationTable();
};

