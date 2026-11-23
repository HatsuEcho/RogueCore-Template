#pragma once
#include "CoreMinimal.h"
#include "ShowroomItem.h"
#include "PickaxeShowroomItem.generated.h"

class APickaxePreviewActor;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API APickaxeShowroomItem : public AShowroomItem {
    GENERATED_BODY()
public:
    APickaxeShowroomItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APickaxePreviewActor* GetPickaxePreviewActor() const;
    
};

