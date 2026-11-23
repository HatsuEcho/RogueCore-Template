#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "Math/RandomStream.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "ConstructionGenerationGroup.h"
#include "ConstructionItem.h"
#include "ConstructionGenerationAsset.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UConstructionGenerationAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstructionItem> Constructions;
    
    UConstructionGenerationAsset();

    UFUNCTION(BlueprintCallable)
    FConstructionGenerationGroup CreateConstructionGroup(int32 InBudget, const FGameplayTagQuery& InQuery, UPARAM(Ref) FRandomStream& InRandomStream);
    
};

