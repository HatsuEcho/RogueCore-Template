#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EProceduralDistanceLength.h"
#include "RoomSelectionQuery.h"
#include "MissionDNA.generated.h"

class UStageComplexity;
class UStageDuration;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UMissionDNA : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfStages;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpPerStage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XpPerStageNumberMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraStageTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageComplexity* Complexity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDuration* Duration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedTunnelLengths;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomSelectionQuery> RoomSelectionQueries;

    UMissionDNA();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoomQueryValidAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoomSelectionQuery GetRoomSelectionQueryRef(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomSelectionQueryNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurationHazardBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetComplexityHazardBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EProceduralDistanceLength> GetAllowedTunnelLengths() const;
    
};

