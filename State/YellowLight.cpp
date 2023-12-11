#include "YellowLight.hpp"
#include "RedLight.hpp"
#include "TrafficLight.hpp"

#include <iostream>

void YellowLight::handle(TrafficLight& light) {
    std::cout << "Yellow Light!" << std::endl;
    light.setState(std::make_shared<RedLight>());
}