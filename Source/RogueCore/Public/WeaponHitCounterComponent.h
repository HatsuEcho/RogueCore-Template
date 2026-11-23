#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "DamageListener.h"
#include "WeaponHitCounterComponent.generated.h"

class AActor;
class UWeaponHitCountEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UWeaponHitCounterComponent : public UActorComponent, public IDamageListener {
    GENERATED_BODY()
protected:
    
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DamageListenerProfile;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponHitCountEffect* HitEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresWeakpointHit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetFilter;

    UWeaponHitCounterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OnReloading();
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedUsing();
    
    UFUNCTION(BlueprintCallable)
    void OnReloading();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<AActor>>& Targets);
    

    // Fix for true pure virtual functions not being implemented
};

