#include "ProceduralSetup.h"
#include "ConstructionSpawnerComponent.h"
#include "Net/UnrealNetwork.h"
#include "NoisyPathfinderComponent.h"
#include "PLSEncounterComponent.h"
#include "ProceduralObjectColliders.h"
#include "ProceduralResources.h"
#include "ProceduralTunnelComponent.h"
#include "ProceduralVeinsComponent.h"
#include "Templates/SubclassOf.h"

AProceduralSetup::AProceduralSetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ShowItemNoisePattern = false;
    this->Seed = -1;
    this->UseRandomSeed = true;
    this->ForcedMachineEvent = NULL;
    this->ForcedTreasure = NULL;
    this->ForcedOtherEvent = NULL;
    this->NoisyPathfinder = CreateDefaultSubobject<UNoisyPathfinderComponent>(TEXT("NoisyPathfinder"));
    this->ProceduralTunnel = CreateDefaultSubobject<UProceduralTunnelComponent>(TEXT("ProceduralTunnel"));
    this->Encounters = CreateDefaultSubobject<UPLSEncounterComponent>(TEXT("Encounters"));
    this->ConstructionSpawnerComponent = CreateDefaultSubobject<UConstructionSpawnerComponent>(TEXT("LevelDecorationComponent"));
    this->Veins = CreateDefaultSubobject<UProceduralVeinsComponent>(TEXT("ProceduralVeins"));
    this->Resources = CreateDefaultSubobject<UProceduralResources>(TEXT("ProceduralResources"));
    this->ObjectColliders = CreateDefaultSubobject<UProceduralObjectColliders>(TEXT("ObjectColliders"));
    this->CSGWorld = NULL;
    this->PathfinderNoise = NULL;
    this->MissionDNA = NULL;
    this->SpawnSettings = ESpawnSettings::Normal;
    this->CanSpawnSpecialEvents = true;
    this->ShouldCarveTunnels = true;
    this->Biome = NULL;
    this->missionLength = 0.00f;
    this->CaveDepth = 0.00f;
    this->PostProcessActor = NULL;
    this->SpecialEvent = NULL;
    this->IsInitialized = false;
    this->CurrentRoomPass = 0;
    this->Pass1Completed = false;
    this->UsePerLevelCritterSpawning = false;
    this->OverrideSpawnExitElevatorAtMineheadCalldownLocation = false;
}

void AProceduralSetup::TriggerMainRoomGenerators() {
}

bool AProceduralSetup::ToggleTrackSpawnedTerrainActor(TSubclassOf<AActor> SubClass) {
    return false;
}



void AProceduralSetup::SpawnTunnelConstructions_Async(FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnTunnelConstructions() {
}

void AProceduralSetup::SpawnSpecialEvents() {
}

void AProceduralSetup::SpawnPostConstructionActors_Async(FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnPostConstructionActors() {
}

void AProceduralSetup::SpawnObjectiveEncounter() {
}

void AProceduralSetup::SpawnObjectiveCriticalItems(const ECriticalItemPass& pass) {
}

void AProceduralSetup::SpawnLevelDecoration_Async(FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnLevelDecoration() {
}

void AProceduralSetup::SpawnItems_Async(AProceduralSetup* Setup, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnItems() {
}

void AProceduralSetup::SpawnFinalPostConstructionActors_Async(FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnFinalPostConstructionActors() {
}

void AProceduralSetup::SpawnEncounters() {
}

void AProceduralSetup::SpawnDebrisItems_Async(AProceduralSetup* Setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth) {
}

void AProceduralSetup::SpawnDebrisItems(EDebrisItemPass pass) {
}

void AProceduralSetup::SpawnConstructions_Async(FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnConstructions() {
}

void AProceduralSetup::SetSeed(int32 NewSeed) {
}


void AProceduralSetup::RemoveBLockedEntrances() {
}




void AProceduralSetup::LoadPostConstructionActors(FLatentActionInfo LatentInfo, bool DoAsyncLoading) {
}

void AProceduralSetup::LoadLevelDecoration(FLatentActionInfo LatentInfo, bool DoAsyncLoading) {
}

void AProceduralSetup::LoadConstructionGroups(FLatentActionInfo LatentInfo, bool DoAsyncLoading) {
}

bool AProceduralSetup::IsGeneratedDataReady() const {
    return false;
}

bool AProceduralSetup::IsCarverDataReady(EDebrisItemPass pass) const {
    return false;
}

void AProceduralSetup::InitializeObjectives() {
}

TArray<FTerrainPlacementDebugGroup> AProceduralSetup::GetTerrainPlacementDebug() const {
    return TArray<FTerrainPlacementDebugGroup>();
}

int32 AProceduralSetup::GetRoomIndexFromPosition(const FVector& position) const {
    return 0;
}

TArray<FRoomNode> AProceduralSetup::GetNonPostCarvedRooms() const {
    return TArray<FRoomNode>();
}

UMissionDNA* AProceduralSetup::GetMissionDNA() const {
    return NULL;
}

TMap<FString, float> AProceduralSetup::GetGemsResourceAmounts() const {
    return TMap<FString, float>();
}

ADeepCSGWorld* AProceduralSetup::GetCSGWorld() const {
    return NULL;
}

TMap<FString, float> AProceduralSetup::GetCollectablesResourceAmounts() const {
    return TMap<FString, float>();
}

void AProceduralSetup::GenerateRoomsFromGraph_Async(AProceduralSetup* Setup, FLatentActionInfo LatentInfo, int32 CarvePass) {
}

void AProceduralSetup::GenerateRoomsFromGraph(int32 CarvePass) {
}



FVector AProceduralSetup::FindLocationInDirection(FVector Origin, FVector Direction, float HorizontalDeviation, float VerticalDeviation, FRandRange Distance, float additionalDistance) {
    return FVector{};
}

void AProceduralSetup::FindEntrancesForAllConnections() {
}

void AProceduralSetup::FillTunnels_Async(AProceduralSetup* Setup, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::FillTunnels() {
}

void AProceduralSetup::DoneCarving() {
}

bool AProceduralSetup::DoAsyncThreadGeneration() const {
    return false;
}

void AProceduralSetup::CreateTunnelPaths() {
}

int32 AProceduralSetup::CreateItemDepths() {
    return 0;
}

void AProceduralSetup::CreateGeneratedInfluenceSet() {
}

void AProceduralSetup::CopyBiomeRockMaterialParametersToCollection(UMaterialParameterCollection* toCollection) {
}

int32 AProceduralSetup::ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride) {
    return 0;
}

void AProceduralSetup::CommitCarving(bool finalCommit, bool generateMesh) {
}

void AProceduralSetup::CarveWithGeneratedInstantCarvers() {
}


void AProceduralSetup::CarveDirt_Async(FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::CarveDirt() {
}


void AProceduralSetup::BeginGenerating() {
}

int32 AProceduralSetup::AddTunnelToRooms(FRoomNode& From, FRoomNode& To, bool hasDirt, bool addConstruction) {
    return 0;
}

int32 AProceduralSetup::AddTunnelToRoomIds(int32 fromID, int32 toID, bool hasDirt, bool addConstruction) {
    return 0;
}

void AProceduralSetup::AddRuntimePostConstructionSpawnDataAsset(const UPostConstructionSpawnDataAsset* InSpawnDataAsset) {
}

void AProceduralSetup::AddRuntimePostConstructionSpawnData(UPostConstructionSpawnData* InSpawnData, bool InAddToFinalSpawnPass) {
}


void AProceduralSetup::AddRoomFromPreviousRoomCenter(FRoomNode& PrevRoomNode, FRoomNode& outRoom, FRoomGenerationInfo& NewRoomGenerationInfo, FVector Direction, float HorizontalDeviation, float VerticalDeviation, float Distance, bool AddRoomBoundsToDistance, bool AddTunnel, bool AddTunnelDirt, bool AddTunnelConstruction) {
}

void AProceduralSetup::AddRoomFromPreviousRoom(FRoomNode& PrevRoomNode, FRoomNode& outRoom, FRoomGenerationInfo& NewRoomGenerationInfo, FVector Direction, FVector2D DirectionalDeviation, EProceduralDistanceLength DistanceLength, bool AddTunnel, bool AddTunnelDirt, bool AddTunnelConstruction) {
}

void AProceduralSetup::AddRoom_FromSelectedRoomGenerator(FVector Location, URoomGenerator* RoomGenerator, FRoomGenerationInfo& generationInfo, FRoomNode& outRoom) {
}

void AProceduralSetup::AddRoom(FVector Location, FRoomGenerationInfo& generationInfo, FRoomNode& outRoom) {
}

void AProceduralSetup::AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float Range) {
}

void AProceduralSetup::AddImportantLocation(const FVector& Location, float Radius) {
}

void AProceduralSetup::AddEnemyDebris() {
}

int32 AProceduralSetup::AddDebrisCollider(const FDebrisCapsule& Capsule) {
    return 0;
}

void AProceduralSetup::AddDebris(UDebrisBase* Debris, UObject* Influencer) {
}

void AProceduralSetup::AddConstructionToTunnel(int32 InTunnelIdx, EProceduralDistanceLength InDistance) {
}

void AProceduralSetup::AddCaveInfluence(UCaveInfluencer* Influencer, const FVector& Location, float Range) {
}

int32 AProceduralSetup::AddAirParticlesCollider(const FDebrisCapsule& Capsule) {
    return 0;
}

void AProceduralSetup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProceduralSetup, CaveDepth);
}


