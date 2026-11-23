#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "Curves/RealCurve.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "FadeVisibilitySubSystem.generated.h"

class ULightComponent;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ROGUECORE_API UFadeVisibilitySubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UFadeVisibilitySubSystem();

    UFUNCTION(BlueprintCallable)
    static void ScalePrimitive(UPARAM(ref) const UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float Duration);

    UFUNCTION(BlueprintCallable)
    static void ScaleOutPrimitive(UPARAM(ref) const UPrimitiveComponent* Component, float Duration);

    UFUNCTION(BlueprintCallable)
    static void ScaleInPrimitive(UPARAM(ref) const UPrimitiveComponent* Component, float Duration);

    UFUNCTION(BlueprintCallable)
    static void FadeOutMaterialByName(UPARAM(ref) const UMeshComponent* Component, FName Name, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutMaterialByIndex(UPARAM(ref) const UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float Duration);

    UFUNCTION(BlueprintCallable)
    static void FadeOutLight(UPARAM(ref) const ULightComponent* Light, float Duration);

    UFUNCTION(BlueprintCallable)
    static void FadeLightToIntensity(ULightComponent* Light, float Duration, float endIntensity);

    UFUNCTION(BlueprintCallable)
    static void FadeLightByCurve(UPARAM(ref) const ULightComponent* Light, UPARAM(Ref) FRuntimeFloatCurve& Curve);

    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByName(UPARAM(ref) const UMeshComponent* Component, FName Name, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByIndex(UPARAM(ref) const UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float Duration);

    UFUNCTION(BlueprintCallable)
    static void FadeInLight(UPARAM(ref) const ULightComponent* Light, float Duration);
    
};

