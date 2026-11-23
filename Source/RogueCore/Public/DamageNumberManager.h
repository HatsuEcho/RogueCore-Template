#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "BuildableInfo.h"
#include "DamageData.h"
#include "DamageNumberManager.generated.h"

class AActor;
class UDamageClass;
class UWidgetAnimation;

UCLASS(Blueprintable)
class ROGUECORE_API UDamageNumberManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> DirectionAnims;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MoveUpAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShakeAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> BannedDamageTypes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBuildableInfo> Arr_DynamicDamageNumbers;

    UDamageNumberManager();

protected:
    UFUNCTION(BlueprintCallable)
    void TryInit();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageNumberExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    FDamageData CreateDmgNumberData(const FVector& LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageNumber(float Damage, AActor* Target, bool IsWeakPoint, bool isArmor, bool isDoT, const FDamageData& Data);
    
};

