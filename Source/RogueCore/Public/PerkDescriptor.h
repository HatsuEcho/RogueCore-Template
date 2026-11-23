#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "PerkDescriptor.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UPerkDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;

    UPerkDescriptor();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCategory() const;

};

