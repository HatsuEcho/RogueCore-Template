#pragma once
#include "CoreMinimal.h"
#include "RunSnapshotWeaponAmmo.generated.h"

USTRUCT(BlueprintType)
struct FRunSnapshotWeaponAmmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReserveCount;
    
    ROGUECORE_API FRunSnapshotWeaponAmmo();
};

