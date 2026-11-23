#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FSDPawn.h"
#include "NetMontageAble.h"
#include "EnemyPawn.generated.h"

class UAnimInstance;
class UAnimMontage;
class UEnemyComponent;
class UEnemyHealthComponent;
class UEnemyPawnAfflictionComponent;
class UMaterialInterface;
class UMeshComponent;
class UMontageReplicatorComponent;
class UPawnStatsComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AEnemyPawn : public AFSDPawn, public INetMontageAble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* Stats;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyPawnAfflictionComponent* Affliction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyComponent* Enemy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterMassSocketName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMontageReplicatorComponent* MontageReplicator;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;

    AEnemyPawn(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMeshComponent* Receive_GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetMesh() const;
    

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

public:
    UFUNCTION(BlueprintCallable)
    virtual float QueueMontage(UAnimMontage* Montage) override;

    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetSkeletalMesh() const override;

    UFUNCTION(BlueprintCallable)
    virtual UAnimInstance* GetAnimInstance() const override;

};

