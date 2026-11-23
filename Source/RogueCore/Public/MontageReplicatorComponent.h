#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "RepMontage.h"
#include "MontageReplicatorComponent.generated.h"

class AActor;
class UAnimInstance;
class UAnimMontage;
class UMontageReplicatorComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UMontageReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMontage, meta=(AllowPrivateAccess=true))
    FRepMontage ReplicatedMontage;

    UMontageReplicatorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopMontage(UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    void StopActiveMontage();
    
    UFUNCTION(BlueprintCallable)
    float PlayMontage(UAnimMontage* InMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMontage(const FRepMontage& InOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveMontageEnded(UAnimMontage* InMontage, bool InInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetActiveMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMontageReplicatorComponent* FindMontageReplicator(const AActor* InActor);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMontages, meta=(AllowPrivateAccess=true))
    TArray<FRepMontage> ReplicatedMontages;

    UFUNCTION(BlueprintCallable)
    void SetMontageNextSection(UAnimMontage* InMontage, FName InFromSection, FName InToSection);

    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMontages(const TArray<FRepMontage>& InOldValue);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMontagePlaying(UAnimMontage* InMontage) const;

};

