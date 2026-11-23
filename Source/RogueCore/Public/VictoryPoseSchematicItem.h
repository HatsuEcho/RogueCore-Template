#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "VictoryPoseSchematicItem.generated.h"

class UVictoryPose;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UVictoryPoseSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPose* VictoryPose;

    UVictoryPoseSchematicItem();

};

