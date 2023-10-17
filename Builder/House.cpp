#include "House.hpp"

#include <iostream>

void House::setWalls(std::string walls) {
    walls_ = walls;
}

void House::setDoors(std::string doors) {
    doors_ = doors;
}

void House::setRoof(std::string roof) {
    roof_ = roof;
}

void House::printProperties() const {
    std::cout << "\nThis house has " << walls_ << " walls, " << doors_ << " doors, " << roof_ << " roof.\n";
}