#ifndef BUILDER_STONE_HOUSE_BUILDER_HPP
#define BUILDER_STONE_HOUSE_BUILDER_HPP

#include "HouseBuilder.hpp"

class StoneHouseBuilder : public HouseBuilder {
public:
    virtual StoneHouseBuilder& buildWalls() override;
    virtual StoneHouseBuilder& buildDoors() override;
    virtual StoneHouseBuilder& buildRoof() override;
};

#endif // BUILDER_STONE_HOUSE_BUILDER_HPP