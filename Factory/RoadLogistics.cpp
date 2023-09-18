#include "RoadLogistics.hpp"
#include "Truck.hpp"

TransportPtr RoadLogistics::createTransport() {
    return TransportPtr(new Truck);
}