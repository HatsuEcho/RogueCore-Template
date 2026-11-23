#include "RoomGeneratorGroup.h"

URoomGeneratorGroup::URoomGeneratorGroup() {
    this->IsBossRoom = false;
}

URoomGenerator* URoomGeneratorGroup::GetRandomRoomWithTags(FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, FRandomStream& RandomStream) {
    return NULL;
}

URoomGenerator* URoomGeneratorGroup::GetRandomRoom(FRandomStream& RandomStream) {
    return NULL;
}

FRoomGeneratorGroupInstance URoomGeneratorGroup::CreateGroupInstance() const {
    return FRoomGeneratorGroupInstance{};
}


