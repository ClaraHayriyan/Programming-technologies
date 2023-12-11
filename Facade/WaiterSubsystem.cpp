#include "WaiterSubsystem.hpp"

#include <iostream>

void WaiterSubsystem::writeOrder() {
    std::cout << "Writing customer's order" << std::endl;
}

void WaiterSubsystem::sendToKitchen() {
    std::cout << "Sending order to kitchen" << std::endl;
}

void WaiterSubsystem::serveCustomer() {
    std::cout << "Customer is served" << std::endl;
}