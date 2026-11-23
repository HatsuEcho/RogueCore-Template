#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CarriableEventDelegate.h"
#include "Throwable.h"
#include "CarriableComponent.generated.h"

class AActor;
class APlayerCharacter;
class UDialogDataAsset;
class UItemCharacterAnimationSet;
class UUseAnimationSetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UCarriableComponent : public UActorComponent, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableEvent OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableEvent OnDropped;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* OverrideCarryAnimationSet;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* OverrideThrowAnimationSet;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CarriedBy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideCarriableSpeedPenalty;

    UCarriableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool PickupItem(APlayerCharacter* byCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnCarrierDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropItem();
    
    UFUNCTION(BlueprintCallable)
    void AttachChanged(bool Attached, const FVector PrevScale);
    

    // Fix for true pure virtual functions not being implemented
};

