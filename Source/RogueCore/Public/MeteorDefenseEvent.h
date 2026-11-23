#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEvent.h"
#include "ProgressShout.h"
#include "MeteorDefenseEvent.generated.h"

class APlagueMeteor;

UCLASS(Blueprintable)
class ROGUECORE_API AMeteorDefenseEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProgressShout> ProgressShouts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialProgress;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APlagueMeteor* meteor;

    AMeteorDefenseEvent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMeteor(APlagueMeteor* NewMeteor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlagueMeteor* GetMeteor();
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

