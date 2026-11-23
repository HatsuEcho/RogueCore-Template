#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "EnemyDeepPathfinderCharacter.generated.h"

class UAnimInstance;
class UAnimMontage;
class UEnemyHealthComponent;
class UMaterialInterface;
class UMeshComponent;
class UMontageReplicatorComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AEnemyDeepPathfinderCharacter : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* HealthComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMontageReplicatorComponent* MontageReplicator;

    AEnemyDeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SwitchToDynamicBaseShader(UMaterialInterface* baseShader, UMeshComponent* MeshComponent) const;

    // INetMontageAble interface implementation
    virtual float QueueMontage(UAnimMontage* Montage) override { return 0.0f; }
    virtual USkeletalMeshComponent* GetSkeletalMesh() const override { return mesh; }
    virtual UAnimInstance* GetAnimInstance() const override { return mesh ? mesh->GetAnimInstance() : nullptr; }

    // Fix for true pure virtual functions not being implemented
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

