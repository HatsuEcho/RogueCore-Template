#include "RopeGun.h"

ARopeGun::ARopeGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireOnStartUsing = false;
    this->RopePreviewDelay = 0.25f;
    this->PreviewRopeMesh = NULL;
    this->PreviewAnchorMesh = NULL;
    this->PreviewFloorMesh = NULL;
    this->PreviewMaterial = NULL;
    this->PreviewRopeRadius = 3.00f;
    this->PreviewAnchorSize = 20.00f;
    this->RopeLengthTextWidgetName = TEXT("RopeLength");
    this->PreviewRope = NULL;
    this->PreviewAnchor = NULL;
    this->PreviewFloor = NULL;
    this->CachedCrosshairAggregator = NULL;
}


