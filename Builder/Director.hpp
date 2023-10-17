#ifndef BUILDER_DIRECTOR_HPP
#define BUILDER_DIRECTOR_HPP

#include "HouseBuilder.hpp"

class Director {
public:
    Director(HouseBuilder*);
    void changeBuilder(HouseBuilder*);
    House make();

private:
    HouseBuilder* builder_;
};

#endif // BUILDER_DIRECTOR_HPP