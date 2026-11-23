#pragma once
#include "CoreMinimal.h"
#include "WeaponOverviewAttributeEntryData.h"
#include "WeaponOverviewAttribute.generated.h"

USTRUCT(BlueprintType)
struct FWeaponOverviewAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponOverviewAttributeEntryData BaseEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponOverviewAttributeEntryData> BonusEntries;
    
    FWeaponOverviewAttribute();
};

