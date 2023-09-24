#include "Director.hpp"
#include "WoodenHouseBuilder.hpp"
#include "StoneHouseBuilder.hpp"

int main() {
    WoodenHouseBuilder woodenHouseBuilder;
    StoneHouseBuilder stoneHouseBuilder;

    Director director(&woodenHouseBuilder);
    House house1 = director.make();

    director.changeBuilder(&stoneHouseBuilder);
    House house2 = director.make();

    house1.printProperties();
    house2.printProperties();
}