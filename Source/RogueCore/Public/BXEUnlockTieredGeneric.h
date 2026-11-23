#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockGenericBase.h"
#include "BXEUnlockTier.h"
#include "BXEUnlockTieredGeneric.generated.h"

class UBXEUnlockRarity;
class UWeaponTagBase;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockTieredGeneric : public UBXEUnlockGenericBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBXEUnlockRarity*, FBXEUnlockTier> TieredUnlocks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> WeaponTagCache;

    UBXEUnlockTieredGeneric();

    TArray<UBXEUnlockRarity*> GetAvailableRarities();
    
};

