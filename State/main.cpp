#include "TrafficLight.hpp"
#include "RedLight.hpp"

int main() {
    TrafficLight trafficLight(std::make_shared<RedLight>());
    for(int i = 0; i < 7; ++i)
        trafficLight.request();
}