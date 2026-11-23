#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "RepMeshGroupMontage.h"
#include "MeshGroupAnimationComponent.generated.h"

class UAnimMontage;
class UMeshGroupMontageSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMeshGroupAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshGroupMontageSet* MontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMontage, meta=(AllowPrivateAccess=true))
    FRepMeshGroupMontage ReplicatedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ActiveMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> FollowingMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* FollowedLeaderMontage;
    
public:
    UMeshGroupAnimationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopActiveMontage();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float PlayMontage(FName InMontageName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMontage();
    
    UFUNCTION(BlueprintCallable)
    void OnMemberMontageEnded(UAnimMontage* InMontage, bool bInInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderMontageStarted(UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderMontageBlendingOut(UAnimMontage* InMontage, bool bInInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveMontageName() const;
    
};

