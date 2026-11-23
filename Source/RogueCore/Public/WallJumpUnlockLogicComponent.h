#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "WallJumpUnlockLogicComponent.generated.h"

class APlayerCharacter;
class UNiagaraSystem;
class UPawnAffliction;
class USoundBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWallJumpUnlockLogicComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* WallJumpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WallJumpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* WallJumpAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpAfflictionDuration;
    
public:
    UWallJumpUnlockLogicComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWallJumpUsed(APlayerCharacter* Player);
    
};

