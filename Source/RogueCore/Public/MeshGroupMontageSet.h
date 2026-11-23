#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "MeshGroupMontages.h"
#include "MeshGroupMontageSet.generated.h"

UCLASS(Blueprintable)
class UMeshGroupMontageSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMeshGroupMontages> Montages;
    
public:
    UMeshGroupMontageSet();

};

