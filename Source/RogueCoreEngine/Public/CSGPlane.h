#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGPlane.generated.h"

UCLASS(Blueprintable)
class ROGUECOREENGINE_API UCSGPlane : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UCSGPlane();

};

