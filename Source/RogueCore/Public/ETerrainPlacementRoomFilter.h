#pragma once
#include "CoreMinimal.h"
#include "ETerrainPlacementRoomFilter.generated.h"

UENUM(BlueprintType, meta=(ScriptName="TerrainPlacementRoomFilterType"))
enum class ETerrainPlacementRoomFilter : uint8 {
    None,
    WhiteList,
    BlackList,
};

