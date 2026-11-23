#pragma once
#include "CoreMinimal.h"
#include "EUserRenderingApi.generated.h"

UENUM(BlueprintType)
enum class EUserRenderingApi : uint8 {
    Default,
    DX11,
    DX12,
};

