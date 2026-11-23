#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "Math/RandomStream.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "RoomGeneratorGroupInstance.h"
#include "RoomGeneratorGroup.generated.h"

class URoomGenerator;

UCLASS(Blueprintable)
class ROGUECORE_API URoomGeneratorGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URoomGenerator*> Rooms;
    
    URoomGeneratorGroup();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URoomGenerator* GetRandomRoomWithTags(UPARAM(Ref) FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    URoomGenerator* GetRandomRoom(UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoomGeneratorGroupInstance CreateGroupInstance() const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBossRoom;

};

