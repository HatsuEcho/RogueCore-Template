#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "GooTerrainSubsystem.generated.h"

class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class UGooTerrainSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UFSDPhysicalMaterial*> GooPhysicalMaterials;
    
public:
    UGooTerrainSubsystem();

};

