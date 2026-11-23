#pragma once
#include "CoreMinimal.h"
#include "SkinEffect.h"
#include "SkeletalMeshSkinEffect.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USkeletalMeshSkinEffect : public USkinEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> mesh;

    USkeletalMeshSkinEffect();

};

