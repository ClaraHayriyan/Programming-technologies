#include "GreenLight.hpp"
#include "YellowLight.hpp"
#include "TrafficLight.hpp"

#include <iostream>

void GreenLight::handle(TrafficLight& light) {
    std::cout << "Green Light!" << std::endl;
    light.setState(std::make_shared<YellowLight>());
}