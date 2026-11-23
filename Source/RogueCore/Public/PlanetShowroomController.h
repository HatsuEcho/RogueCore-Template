#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "Math/Quat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
#include "ERunDepth.h"
#include "PlanetPointInfo.h"
#include "PlanetPointSetup.h"
#include "ShowroomController.h"
#include "GeneratedRunForBiome.h"
#include "PlanetShowroomController.generated.h"

class APlanetShowroomItem;
class UBiome;
class UCanvasPanelSlot;
class UObject;
class UPlanetShowroomController;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPlanetShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccumulatedDeltaPitch;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccumulatedDeltaYaw;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TOptional<FQuat> PointTargetRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlanetShowroomItem* PlanetInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartingPlanetRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragSmoothingSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointTargetSmoothingSpeed;

public:
    UPlanetShowroomController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlanetViewDepth(const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSeed(const int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlanetPointInfo> ProjectPointsToScreen(const TArray<USceneComponent*>& Points, UCanvasPanelSlot* canvasSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void LookAtScenePoint(const USceneComponent* Point);
    
    UFUNCTION(BlueprintCallable)
    void HighlightZoneUnderMouse(UCanvasPanelSlot* canvasSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UBiome*, FPlanetPointSetup> GetShuffledPlanetPoints(const int32 Seed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetHighlightedBiome() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlanetShowroomController* DisplayPlanet(UObject* WorldContextObject, TSoftClassPtr<APlanetShowroomItem> PlanetActor);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointTargetDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointTargetEaseExponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat PointStartRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PointTargetElapsed;

    UFUNCTION(BlueprintCallable)
    bool LookAtRun(const FGeneratedRunForBiome& Run, const int32 MapSeed);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LookAtActiveRun(const UObject* WorldContext, const int32 MapSeed, ERunDepth& RunDepth);

};

