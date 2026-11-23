#include "BossRiftActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ABossRiftActor::ABossRiftActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->LifeSpanAfterBossDeath = 5.00f;
    this->Root = (USceneComponent*)RootComponent;
    this->Boss = NULL;
    this->BossRift = NULL;
    this->BossHealth = NULL;
    this->SourceMutator = NULL;
}



bool ABossRiftActor::IsBossAlive() const {
    return false;
}

void ABossRiftActor::HandleBossDestroyed(AActor* DestroyedActor) {
}

void ABossRiftActor::HandleBossDeath(UHealthComponentBase* HealthComponent) {
}

AActor* ABossRiftActor::GetBossRift() const {
    return NULL;
}

AActor* ABossRiftActor::GetBoss() const {
    return NULL;
}

void ABossRiftActor::All_BossDied_Implementation() {
}

void ABossRiftActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABossRiftActor, Boss);
    DOREPLIFETIME(ABossRiftActor, BossRift);
}


