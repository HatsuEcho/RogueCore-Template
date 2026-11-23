#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=AquisitionSource -FallbackName=AquisitionSource
#include "AquisitionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "SaveGameIDInterface.h"
#include "OnEntitlementStateChangedDelegate.h"
#include "BaseEntitlement.generated.h"

class IEntitlementRewardPool;
class UEntitlementRewardPool;
class UBuildRestriction;
class UEntitlementSubsystem;

UCLASS(Abstract, Blueprintable)
class ROGUECOREONLINESERVICES_API UBaseEntitlement : public UDataAsset, public ISaveGameIDInterface, public IAquisitionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOneTimeUse;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntitlementStateChanged OnUnlockStateChanged;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFakeUnlockedStateInEditor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorUnlockedState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildRestriction* RestrictedToPlatform;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IEntitlementRewardPool> EntitlementRewards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AquisitionSourceTag;

    UBaseEntitlement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnLocked() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckIfUnlockConditionIsMet(UEntitlementSubsystem* EntitlementSubsystem);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetAquisitionSourceTag() const override PURE_VIRTUAL(GetAquisitionSourceTag, return FGameplayTag{};);
    
};

