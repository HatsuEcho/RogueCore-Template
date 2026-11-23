#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TerrainScannerStaticMesh.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UTerrainScannerStaticMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAtBeginPlay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOnDeath;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFogOfWar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRevealedByDataTerminal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleOnScanner;

    UTerrainScannerStaticMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibleOnScanner(bool InShowOnScanner);
    
    UFUNCTION(BlueprintCallable)
    void SetUseFogOfWar(bool InUseFogOfWar);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterWithSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsRevealedByDataTerminal(const bool NewRevealedByDataTerminal);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevealedByDataTerminal() const;

};

