#include "HouseBuilder.hpp"

#include <utility> // std::move

HouseBuilder::HouseBuilder()
    : house_{std::make_unique<House>()}
{
}

auto HouseBuilder::build() -> HousePtr {
    HousePtr housePtr = std::move(house_);
    return housePtr;
}