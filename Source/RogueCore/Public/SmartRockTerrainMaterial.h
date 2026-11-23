#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=TerrainMaterialBase -FallbackName=TerrainMaterialBase
#include "TerrainMaterialBase.h"
#include "SmartRockTerrainMaterial.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API USmartRockTerrainMaterial : public UTerrainMaterialBase {
    GENERATED_BODY()
public:
    USmartRockTerrainMaterial();

};

