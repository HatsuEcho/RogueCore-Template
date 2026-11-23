#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "Components/Widget.h"
#include "AlterationWheelStyle.h"
#include "AlterationWheel.generated.h"

class UPrimaryMutator;

UCLASS(Blueprintable)
class ROGUECORE_API UAlterationWheel : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationWheelStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDownShare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDownSharpness;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> Alterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* HubAlteration;
    
public:
    UAlterationWheel();

    UFUNCTION(BlueprintCallable)
    void Spin(int32 InResultIndex, float InDuration, int32 InTurns, float InLandingOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(const FAlterationWheelStyle& InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetAlterations(const TArray<UPrimaryMutator*>& InAlterations, UPrimaryMutator* InHubAlteration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpinning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSettled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexUnderHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHandAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimaryMutator*> GetAlterations() const;
    
};

