#pragma once
#include "CoreMinimal.h"
#include "GymExerciseProgress.generated.h"

class UGymExerciseType;

USTRUCT(BlueprintType)
struct FGymExerciseProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGymExerciseType* Exercise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Reps;
    
    ROGUECORE_API FGymExerciseProgress();
};

