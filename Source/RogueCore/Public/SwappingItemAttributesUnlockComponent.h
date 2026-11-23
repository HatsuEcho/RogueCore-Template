#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "WeightedSwappingAttribute.h"
#include "SwappingItemAttributesUnlockComponent.generated.h"

class AAmmoDrivenWeapon;
class AItem;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API USwappingItemAttributesUnlockComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedSwappingAttribute> SwappingAttributes;

public:
    USwappingItemAttributesUnlockComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SwapActiveAttribute(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAddedToInventory(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterReloadedItem(AAmmoDrivenWeapon* InWeapon, APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterOverheatedItem(AAmmoDrivenWeapon* InWeapon, APlayerCharacter* InCharacter);
    
};

