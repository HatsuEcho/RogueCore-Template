#pragma once
#include "CoreMinimal.h"
#include "EncounterSpecialItem.h"
#include "SpecialEventSpawner.h"
#include "EncounterSpecialEventSpawner.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UEncounterSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterSpecialItem Encounter;

    UEncounterSpecialEventSpawner();

};

