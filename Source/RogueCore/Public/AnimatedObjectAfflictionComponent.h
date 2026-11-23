#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "AnimatedObjectAfflictionComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAnimatedObjectAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mesh;

    UAnimatedObjectAfflictionComponent(const FObjectInitializer& ObjectInitializer);

};

