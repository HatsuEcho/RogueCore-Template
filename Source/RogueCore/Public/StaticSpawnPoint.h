#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EStaticSpawnPointType.h"
#include "StaticSpawnPointSelection.h"
#include "StaticSpawnPoint.generated.h"

class UStaticSpawnPointGameplayRestrictions;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UStaticSpawnPoint : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaticSpawnPointType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticSpawnPointGameplayRestrictions* GameplayRestrictions;
    
    UStaticSpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MatchesSelection(const FStaticSpawnPointSelection& InSelection) const;
    
};

