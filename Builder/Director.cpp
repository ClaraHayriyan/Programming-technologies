#include "Director.hpp"

Director::Director(HouseBuilder* builder)
    : builder_{builder}
{
}

void Director::changeBuilder(HouseBuilder* builder) {
    builder_ = builder;
}

House Director::make() {
    builder_->buildWalls().buildDoors().buildRoof();
    return *(builder_->build());
}