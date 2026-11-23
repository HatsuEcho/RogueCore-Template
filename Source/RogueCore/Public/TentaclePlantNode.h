#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyPawn.h"
#include "Templates/SubclassOf.h"
#include "TentaclePlantNode.generated.h"

class ASplineCableActor;
class ATentaclePlant;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ATentaclePlantNode : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASplineCableActor> TentacleCableType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineCableActor* TentacleCable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATentaclePlant* TentaclePlant;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;

    ATentaclePlantNode(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnPathCompleted(bool wasCompleted);
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

