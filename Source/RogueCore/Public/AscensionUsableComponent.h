#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "AscensionUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAscensionUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterLevelTooLowText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotEnoughMeritsText;

    UAscensionUsableComponent(const FObjectInitializer& ObjectInitializer);

};

