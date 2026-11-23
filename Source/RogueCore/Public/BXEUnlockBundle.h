#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockBase.h"
#include "BXEUnlockInstance.h"
#include "BXEUnlockBundle.generated.h"

class UWeaponTagBase;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockBundle : public UBXEUnlockBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockBase*> BundledUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> WeaponTagCache;
    
public:
    UBXEUnlockBundle();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamicBundle() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetCarriedInstances(const FBXEUnlockInstance& InBundleInstance, TArray<FBXEUnlockInstance>& OutInstances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBXEUnlockBase*> GetBundledUnlocks() const;
    
};

