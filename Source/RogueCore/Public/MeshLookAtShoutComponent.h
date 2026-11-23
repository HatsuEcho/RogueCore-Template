#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "MeshLookAtShoutComponent.generated.h"

class UDialogDataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UMeshLookAtShoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPrimitiveComponent>, UDialogDataAsset*> MeshShouts;
    
public:
    UMeshLookAtShoutComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindMeshes(const TArray<UPrimitiveComponent*>& Meshes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetShoutForMesh(const UPrimitiveComponent* mesh) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearShoutBindings();
    
    UFUNCTION(BlueprintCallable)
    void BindShoutToMeshes(UDialogDataAsset* Shout, const TArray<UPrimitiveComponent*>& Meshes);
    
};

