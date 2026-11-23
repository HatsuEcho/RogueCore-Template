#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "EMontageRotationDirection.h"
#include "MontageRotationBank.h"
#include "MontageRotationComponent.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UMontageRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotationCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> TargetComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PawnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ResolvedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerBank, meta=(AllowPrivateAccess=true))
    FMontageRotationBank ServerBank;
    
public:
    UMontageRotationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ResetRotation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerBank();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRotating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationMontageRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationMontageElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMontageRotationDirection GetRotationDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotatedYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurveYaw() const;
    
};

