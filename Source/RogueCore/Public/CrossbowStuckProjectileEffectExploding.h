#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectExploding.generated.h"

class UAudioComponent;
class UHealthComponentBase;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UCrossbowStuckProjectileEffectExploding : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChemicalSoundCue;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChemicalAudioComponent;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChemicalReactionDelay;

public:
    UCrossbowStuckProjectileEffectExploding(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StartTimeoutTimer(UHealthComponentBase* destroyed);
    
    UFUNCTION(BlueprintCallable)
    void EnableTimeOut();
    
};

