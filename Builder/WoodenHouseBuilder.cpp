#include "WoodenHouseBuilder.hpp"

WoodenHouseBuilder& WoodenHouseBuilder::buildWalls() {
    house_->setWalls("wooden");
    return *this;
}

WoodenHouseBuilder& WoodenHouseBuilder::buildDoors() {
    house_->setDoors("wooden");
    return *this;
}

WoodenHouseBuilder& WoodenHouseBuilder::buildRoof() {
    house_->setRoof("triangle shaped");
    return *this;
}