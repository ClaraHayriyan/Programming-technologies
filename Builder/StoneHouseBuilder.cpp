#include "StoneHouseBuilder.hpp"

StoneHouseBuilder& StoneHouseBuilder::buildWalls() {
    house_->setWalls("stone");
    return *this;
}

StoneHouseBuilder& StoneHouseBuilder::buildDoors() {
    house_->setDoors("iron");
    return *this;
}

StoneHouseBuilder& StoneHouseBuilder::buildRoof() {
    house_->setRoof("flat");
    return *this;
}