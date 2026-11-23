#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ECharacterState.h"
#include "StatusAddedComponent.h"
#include "EndStatusEffectOnLanding.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UEndStatusEffectOnLanding : public UActorComponent, public IStatusAddedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStatusEffect> EffectToCancel;

    UEndStatusEffectOnLanding(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOwnerStateChanged(ECharacterState State);
    

    // Fix for true pure virtual functions not being implemented
};

