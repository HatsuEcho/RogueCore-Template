#pragma once
#include "CoreMinimal.h"
#include "SavedBoosterDeckItem.h"
#include "SavedBoosterDecks.generated.h"

USTRUCT(BlueprintType)
struct FSavedBoosterDecks {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedBoosterDeckItem> SavedDecks;
    
public:
    ROGUECORE_API FSavedBoosterDecks();
};

