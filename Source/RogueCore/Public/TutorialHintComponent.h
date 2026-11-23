#pragma once
#include "CoreMinimal.h"
#include "TutorialComponent.h"
#include "TutorialHint.h"
#include "TutorialHintComponent.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UTutorialHintComponent : public UTutorialComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialHint Hint;

    UTutorialHintComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetRemainingVisibleTime(float remainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsSingleplayer(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeHint(const FTutorialHint& NewHint);
    
};

