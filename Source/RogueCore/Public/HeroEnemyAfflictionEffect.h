#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AfflictionEffect.h"
#include "HeroEnemyAfflictionEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UHeroEnemyAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToAdd;

    UHeroEnemyAfflictionEffect();

};

