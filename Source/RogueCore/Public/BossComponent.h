#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "BossComponent.generated.h"

class AActor;
class UAnimMontage;
class UMaterialInterface;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBossComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, UMaterialInterface*> ForcedShellOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ForcedHiddenShellMeshes;
    
public:
    UBossComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="InWorldContextObject"))
    static void WaitForBossDeathAnimation(const UObject* InWorldContextObject, AActor* InBoss, FLatentActionInfo InLatentInfo, float InMaxWaitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetInvulnerableShellForcedVisible(bool bForcedVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingDeathAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvulnerableShellForcedVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetBossRift() const;
    
};

