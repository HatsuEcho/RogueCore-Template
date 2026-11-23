#include "PipelineMeshLayer.h"

FPipelineMeshLayer::FPipelineMeshLayer() {
    this->mesh = NULL;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->MaterialOverride = NULL;
    this->bCastShadow = false;
    this->bShowOnTerrainScanner = false;
}

