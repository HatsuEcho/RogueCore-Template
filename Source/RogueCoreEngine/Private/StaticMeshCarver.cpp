#include "StaticMeshCarver.h"

UStaticMeshCarver::UStaticMeshCarver() {
    this->status = TEXT("No carver generated");
    this->builder = ECarverBSPBuilder::WindingBSP;
    this->MaxConvexHulls = 32;
    this->MaxPlanesPerHull = 32;
    this->HullErrorTolerancePct = 0.10f;
    this->MinHullThicknessPct = 0.50f;
    this->MaxPlanes = 16384;
    this->PlaneMergeAngle = 0.50f;
    this->CoplanarTolerancePct = 0.00f;
}

float UStaticMeshCarver::GetSourceMeshVolume() const {
    return 0.0f;
}

float UStaticMeshCarver::GetPreviewVolume() const {
    return 0.0f;
}

void UStaticMeshCarver::Generate() {
}

void UStaticMeshCarver::ExportPreviewMesh() {
}

void UStaticMeshCarver::ComputePreviewError() {
}


