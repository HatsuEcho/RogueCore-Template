#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PerkHUDWidget.generated.h"

class AFSDPlayerState;
class APlayerCharacter;
class UPerkAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UPerkHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* PerkAsset;

    UPerkHUDWidget();

    UFUNCTION(BlueprintCallable)
    void SetPerkAsset(UPerkAsset* InPerk);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePerkAssetChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
};

