#pragma once
#include "CoreMinimal.h"
#include "StaticPointPostConstructionSpawnData.h"
#include "RandomWeaponPostConstructionSpawnData.generated.h"

class UBXEUnlockCollection;
class UUnlockCollectionTag;

UCLASS(Blueprintable, EditInlineNew)
class URandomWeaponPostConstructionSpawnData : public UStaticPointPostConstructionSpawnData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* WeaponCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* CollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AvoidDuplicateWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightOffset;
    
public:
    URandomWeaponPostConstructionSpawnData();

};

