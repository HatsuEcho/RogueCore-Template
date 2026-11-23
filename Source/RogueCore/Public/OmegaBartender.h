#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameFramework/Actor.h"
#include "AnimationWeight.h"
#include "ArmAnimation.h"
#include "EBartenderAnim.h"
#include "GymExerciseProgress.h"
#include "OnBeerOrderedChangedDelegate.h"
#include "OnExerciseCompleteDelegate.h"
#include "OnExerciseCompletionMarkDelegate.h"
#include "OnNewGymGoalDelegateDelegate.h"
#include "OnNewOrderAcceptedDelegate.h"
#include "OnNewSpecialOrderSignatureDelegate.h"
#include "OnQuestAcceptedDelegate.h"
#include "OnSetCompleteDelegate.h"
#include "OmegaBartender.generated.h"

class ADrinkableActor;
class APlayerCharacter;
class UAnimMontage;
class UDrinkableDataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AOmegaBartender : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewSpecialOrderSignature OnNewSpecialOrder;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestAccepted OnQuestAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewOrderAccepted OnOrderAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExerciseCompletionMark OnExerciseCompletionMark;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetComplete OnSetComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExerciseComplete OnExerciseComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewGymGoalDelegate OnNewGymGoal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeerOrderedChanged OnBeerOrderedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExerciseProgress, meta=(AllowPrivateAccess=true))
    TArray<FGymExerciseProgress> ExerciseProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Calories, meta=(AllowPrivateAccess=true))
    int32 Calories;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MugSocketName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DetachNotifyName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mugs, meta=(AllowPrivateAccess=true))
    TArray<ADrinkableActor*> Mugs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCostMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestCompletionDelaySeconds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<bool> EmptySlot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* CurrentOrder;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* SpecialOrder;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentIdleMontageIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentPourMontageIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DrinkAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BartenderAnimationState, meta=(AllowPrivateAccess=true))
    EBartenderAnim BartenderAnimationState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaIdle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmAnimation> OmegaIdleArm;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> playersInside;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OmegaSalute;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteLoseTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SalutesToMakeOmegaSalute;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BeerOrdered, meta=(AllowPrivateAccess=true))
    bool QuestAccepted;

    AOmegaBartender(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ValidCheckPlayersInside();
    
public:
    UFUNCTION(BlueprintCallable)
    void TryAndOrder(bool CanTriggerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOrder(UDrinkableDataAsset* Order);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnMugInHand(int32 Index, USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialOrder(UDrinkableDataAsset* Order);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNextOrder(UDrinkableDataAsset* Drink, bool IgnoreCheck, bool OnlySet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMug(ADrinkableActor* Mug, int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerSaluted();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MugTaken(ADrinkableActor* Mug);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemovePlayerInside(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_QuestCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_QuestAccpeted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOmegaSaluteMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOmegaPourMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOmegaIdleMontage(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFillAnimation(int32 Index, UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaceOrder();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PickNewIdle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Mugs();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ExerciseProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Calories();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BeerOrdered();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BartenderAnimationState();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDetachMug(FName NotifyName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void MugTaken(ADrinkableActor* Mug);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestAccepted() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerCostMultiplier() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetIdleMontage(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetIdleArmMontage(int32 MontageIndex, int32 ArmIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetEmptySlots();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCalories() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DetachMug(int32 Index, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBartenderAnimState(EBartenderAnim State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CannotAfford();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelQuest();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_MugFilled(int32 Index);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ChangeMugSlot(int32 Index, bool Empty);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPlayerInside(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateButton();
    
    UFUNCTION(BlueprintCallable)
    void AcceptQuest(UDrinkableDataAsset* QuestDrink);
    
};

