#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GibPartsList.generated.h"

class UMaterialInstance;
class UNiagaraComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class ROGUECORE_API UGibPartsList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> GibMeshes;
    
    UGibPartsList();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetGibMeshesAndMaterialsOnFX(UNiagaraComponent* ns, UMaterialInstance* Material, float Scale) const;
    
};

