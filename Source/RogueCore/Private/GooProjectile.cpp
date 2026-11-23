#include "GooProjectile.h"

AGooProjectile::AGooProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GooTerrainMaterial = NULL;
    this->PaintMesh = NULL;
    this->PaintRadius = 180.00f;
    this->PaintDepth = 70.00f;
    this->PaintNoise = 0.00f;
    this->AffectsEnemies = true;
    this->SplatParticles = NULL;
    this->SplatColorParameter = TEXT("User.Color");
    this->SplatSound = NULL;
    this->NoPaintActorClasses.AddDefaulted(1);
}


void AGooProjectile::PaintTerrain(const FVector& Location, const FVector& Normal) {
}

UTerrainMaterial* AGooProjectile::GetGooTerrainMaterial() const {
    return NULL;
}


