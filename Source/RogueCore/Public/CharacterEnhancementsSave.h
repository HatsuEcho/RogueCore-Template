#pragma once
#include "CoreMinimal.h"
#include "EnhancementEquipEntry.h"
#include "CharacterEnhancementsSave.generated.h"

USTRUCT(BlueprintType)
struct FCharacterEnhancementsSave {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnhancementEquipEntry> CharacterEnhancements;
    
public:
    ROGUECORE_API FCharacterEnhancementsSave();
};

