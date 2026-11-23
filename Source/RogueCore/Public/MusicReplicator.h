#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActiveMusicItem.h"
#include "MusicReplicator.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AMusicReplicator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveMusic, meta=(AllowPrivateAccess=true))
    TArray<FActiveMusicItem> ActiveMusic;

    AMusicReplicator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveMusic();
    
};

