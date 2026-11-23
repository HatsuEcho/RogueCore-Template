#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "WaveDifficultyController.h"
#include "DifficultyController.generated.h"

class UStageDifficultyProgression;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UDifficultyController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCurrentDifficultyChanged;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveDifficultyController DifficultyBasedSpawnController;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDifficultyProgression* StageDifficultyProgression;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoonNewDifficultyTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemyCountModifierUsed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve EnemyCountModifierScaleOverTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepCurrentDifficulty, meta=(AllowPrivateAccess=true))
    int32 CurrentDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextDifficultyPlayerCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextDifficultyTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SoonNextDifficultyTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningTimeBeforeNextDifficulty;

public:
    UDifficultyController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleStageProgressionWarnings(bool suggestExtraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_IncrementDifficulty();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRepCurrentDifficulty();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToNextDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageDifficultyProgression* GetStageDifficultyProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDifficulty() const;
    
};

