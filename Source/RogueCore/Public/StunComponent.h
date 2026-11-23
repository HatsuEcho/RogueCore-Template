#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "StunBeginDelegateDelegate.h"
#include "StunEndDelegateDelegate.h"
#include "StunRequest.h"
#include "StunState.h"
#include "StunComponent.generated.h"

class AActor;
class UObject;
class UPawnAffliction;
class UStunComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStunComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStunBeginDelegate OnStunBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStunEndDelegate OnStunEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDurationMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunImmunityWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDriveAIBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAILogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushStunAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StunState, meta=(AllowPrivateAccess=true))
    FStunState StunState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ImmunitySources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAffliction* ActiveStunAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAffliction* ActiveImmunityAffliction;
    
public:
    UStunComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryStun(const FStunRequest& InRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetStunImmunity(bool bInImmune, const UObject* InSource);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StunState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStunImmunity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingStunTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStunComponent* FindStunComponent(const AActor* InActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndStun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeStunned() const;
    
};

