#include "SeaLogistics.hpp"
#include "Ship.hpp"

TransportPtr SeaLogistics::createTransport() {
    return TransportPtr(new Ship);
}