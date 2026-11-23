#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerRewinderGhost.generated.h"

class UAnimSequence;
class UMaterialInterface;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ATimerRewinderGhost : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HologramMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HologramAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToScaleToZero;

    ATimerRewinderGhost(const FObjectInitializer& ObjectInitializer);

};

