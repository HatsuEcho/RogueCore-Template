#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FragileDebrisCleaner.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFragileDebrisCleaner : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleanRadius;
    
    UFragileDebrisCleaner(const FObjectInitializer& ObjectInitializer);

};

