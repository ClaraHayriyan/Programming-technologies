#include "RedLight.hpp"
#include "GreenLight.hpp"
#include "TrafficLight.hpp"

#include <iostream>

void RedLight::handle(TrafficLight& light) {
    std::cout << "Red Light!" << std::endl;
    light.setState(std::make_shared<GreenLight>());
}