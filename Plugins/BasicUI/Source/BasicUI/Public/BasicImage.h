#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Styling/SlateBrush.h"
#include "BasicBrush.h"
#include "BasicColor.h"
#include "BasicMaterialParameters.h"
#include "BasicUserWidget.h"
#include "BasicImage.generated.h"

class UBasicImagePaintData;
class UImage;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class BASICUI_API UBasicImage : public UBasicUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicColor BrushColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicMaterialParameters MaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaterialSetWidgetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialWidgetScaleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* InnerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBasicImagePaintData* PaintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush SlateBrush;
    
public:
    UBasicImage();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDynamicMaterialVector(FName InName, FVector4 InVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDynamicMaterialTexture(FName InName, UTexture2D* InTexture) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDynamicMaterialScalar(FName InName, float InValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDynamicMaterialParameters(FBasicMaterialParameters InParameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDynamicMaterialColor(FName InName, FBasicColor InColor) const;
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* InTexture, bool InMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushColor(FBasicColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(FBasicBrush InBrush);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicMaterialVector(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicMaterialTexture(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicMaterialScalar(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicMaterialColor(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetSlateBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetDynamicMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBasicMaterialParameters GetDefaultDynamicMaterialParameters() const;
    
};

