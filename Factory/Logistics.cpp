#include "Logistics.hpp"

void Logistics::planDeivery() {
    TransportPtr transport = createTransport();
    transport->deliver();
}

Logistics::~Logistics() {}
