#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentCarver.generated.h"

class ULineSegmentCarverComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ALineSegmentCarver : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSegmentCarverComponent* LineComponent;
    
    ALineSegmentCarver(const FObjectInitializer& ObjectInitializer);

};

