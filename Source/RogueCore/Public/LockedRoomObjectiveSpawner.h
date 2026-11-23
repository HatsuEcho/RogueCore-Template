#pragma once
#include "CoreMinimal.h"
#include "StructureSpawner.h"
#include "LockedRoomObjectiveSpawner.generated.h"

class AActor;
class ALockedRoomActor;
class UBXELockedRoomObjective;

UCLASS(Blueprintable)
class ROGUECORE_API ALockedRoomObjectiveSpawner : public AStructureSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UBXELockedRoomObjective* Objective;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RoomInstance, meta=(AllowPrivateAccess=true))
    ALockedRoomActor* RoomInstance;

    ALockedRoomObjectiveSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLockedRoomObjective(UBXELockedRoomObjective* NewObjective);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_LockedRoomSpawned(AActor* Room);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RoomInstance();
    
};

