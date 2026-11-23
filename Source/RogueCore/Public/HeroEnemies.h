#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "EliteEnemyEntry.h"
#include "StageLogic.h"
#include "HeroEnemies.generated.h"

class APawn;
class UEnemyDescriptor;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UHeroEnemies : public UStageLogic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AllowedQuery;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> Entries;

    UHeroEnemies();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Enemy, UEnemyDescriptor* descriptor);
    
};

