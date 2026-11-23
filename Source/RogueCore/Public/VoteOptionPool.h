#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EVoteOptionPairing.h"
#include "VoteOptionPool.generated.h"

class UVoteWidget;


class UVoteOptionAction;

UCLASS(Blueprintable)
class ROGUECORE_API UVoteOptionPool : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockTelemetryIdentifier;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TelemetryIdentifier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UVoteOptionAction*> VoteOptionActions;

public:
    UVoteOptionPool();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<UVoteOptionAction*> GetVoteOptionActions();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVoteOptions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteOptionPairing Pairing;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVoteWidget> VoteWidgetOverride;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UVoteWidget> GetVoteWidgetSoftClassPtr() const;

};

