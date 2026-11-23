#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "Math/RandomStream.h"
#include "BXEUnlockCollection.h"
#include "BioBoosterDeckEntry.h"
#include "RewardDispenserReward.h"
#include "BioBoosterDeck.generated.h"

class UFSDSaveGame;
class UPlayerCharacterData;


class UBXEUnlockBase;
class UPlayerCharacterID;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class ROGUECORE_API UBioBoosterDeck : public UBXEUnlockCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* BelongsToClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBioBoosterDeckEntry> Cards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBioBoosterDeckEntry> SelectableCards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBXEUnlockBase*> Unlocks;

    UBioBoosterDeck();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRewardDispenserReward> GetRandomRewardUnlocks(int32 InCount, UWorld* Context, FRandomStream& InRandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetBelongsToClass() const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlocksAtLevel;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterLevelUnlocked(const UFSDSaveGame* save) const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlocksAtLevel() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDeckName() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetDeckIcon() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBXEUnlockBase*> GetCardUnlocks() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterData* GetBelongsToCharacterData() const;

};

