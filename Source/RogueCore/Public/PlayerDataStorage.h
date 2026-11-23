#pragma once
#include "CoreMinimal.h"
#include "BXEPlayerData.h"
#include "ESeamlessTravelStorageType.h"
#include "BXEStartLoadout.h"
#include "RunSnapshotResource.h"
#include "RunSnapshotWeaponAmmo.h"
#include "PlayerDataStorage.generated.h"

class UPlayerCharacterID;
class UResourceData;


class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlayerDataStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeamlessTravelStorageType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEPlayerData PlayerData;
    
    ROGUECORE_API FPlayerDataStorage();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* PlayerClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEStartLoadout StartLoadout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, FRunSnapshotResource> CarriedResources;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRunSnapshotWeaponAmmo> WeaponAmmo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFraction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalKills;

};

