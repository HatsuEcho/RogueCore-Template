#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OnCurrencyChangedDelegate.h"
#include "OnCurrencyCreatedDelegate.h"
#include "OnLocalPlayerEnteredOrExitGymDelegate.h"
#include "OnPlayerCountChangedDelegate.h"
#include "BarSubSystem.generated.h"

class AFSDPlayerController;
class AFSDPlayerState;
class AOmegaBartender;
class UDrinkableDataAsset;
class UGymExerciseType;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UBarSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrencyChanged OnCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrencyCreated OnCurrencyCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCountChanged OnPlayerCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerEnteredOrExitGym OnLocalPlayerEnterExitGym;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOmegaBartender* Bartender;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Bound;

    UBarSubSystem();

    UFUNCTION(BlueprintCallable)
    void SetBartender(AOmegaBartender* InBartender);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerLoggedOut(AFSDPlayerState* PState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerLoggedIn(AFSDPlayerController* Controller);
    
public:
    UFUNCTION(BlueprintCallable)
    void LocalPlayerExitGymArea();
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerEnteredGymArea();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool HasExercise(const UObject* InWorldContextObject, const UGymExerciseType* Exercise);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool HasEnoughReps(const UObject* InWorldContextObject, UGymExerciseType* Exercise, int32 Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UGymExerciseType* GetExerciseType(const UObject* InWorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static int32 GetExerciseReps(const UObject* InWorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static int32 GetExerciseIndex(const UObject* InWorldContextObject, UGymExerciseType* Exercise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static int32 GetCalories(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static int32 GetBeerCost(UObject* InWorldContextObject, UDrinkableDataAsset* Drink);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static AOmegaBartender* GetBartender(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static TArray<UGymExerciseType*> GetAllExerciseTypes(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static TArray<int32> GetAllExerciseReps(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static int32 GetAdjustedCostForPlayerCount(UObject* InWorldContextObject, const int32 InBaseCost);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void AddInternalReps(const UObject* InWorldContextObject, const UGymExerciseType* Exercise, int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void AddExerciseReps(const UObject* InWorldContextObject, UGymExerciseType* Exercise, int32 Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void AddCalories(const UObject* InWorldContextObject, int32 Amount);
    
};

