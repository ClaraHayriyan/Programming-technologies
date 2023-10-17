#ifndef BUILDER_WOODEN_HOUSE_BUILDER_HPP
#define BUILDER_WOODEN_HOUSE_BUILDER_HPP

#include "HouseBuilder.hpp"

class WoodenHouseBuilder : public HouseBuilder {
public:
    virtual WoodenHouseBuilder& buildWalls() override;
    virtual WoodenHouseBuilder& buildDoors() override;
    virtual WoodenHouseBuilder& buildRoof() override;
};

#endif // BUILDER_WOODEN_HOUSE_BUILDER_HPP