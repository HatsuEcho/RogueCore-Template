#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ConstructionGenerationGroup.h"
#include "DecorationItem.h"
#include "DirtDecorationItem.h"
#include "ConstructionSpawnerComponent.generated.h"

class UObject;
class UPostConstructionSpawnData;
class UPostConstructionSpawnDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UConstructionSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LevelPersistentEditorAssets;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPostConstructionSpawnDataAsset* PostConstructionSpawnDataAsset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPostConstructionSpawnData*> RuntimeSpawnData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecorationItem> Decoration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirtDecorationItem> DirtDecoration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogSpawning;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintSpawning;

public:
    UConstructionSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddRuntimePostConstructionSpawnDataAsset(const UPostConstructionSpawnDataAsset* InSpawnDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddRuntimePostConstructionSpawnData(UPostConstructionSpawnData* InSpawnData, bool InAddToFinalSpawnPass);
    
    UFUNCTION(BlueprintCallable)
    void AddConstructionGroupToRoom(int32 InRoomID, FConstructionGenerationGroup InGroup);
    
};

