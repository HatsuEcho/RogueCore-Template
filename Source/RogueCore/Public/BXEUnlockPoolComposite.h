#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockCollection.h"
#include "WeightedUnlockPool.h"
#include "BXEUnlockPoolComposite.generated.h"

class UUnlockVisualSettings;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockPoolComposite : public UBXEUnlockCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedUnlockPool> UnlockPools;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedUnlockPool> SkipPools;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockVisualSettings* SkipVisualSettings;

    UBXEUnlockPoolComposite();

};

