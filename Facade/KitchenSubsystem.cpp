#include "KitchenSubsystem.hpp"

#include <iostream>

void KitchenSubsystem::cookFood() {
    std::cout << "Cooking the food" << std::endl;
}

void KitchenSubsystem::callWaiter() {
    std::cout << "Calling the waiter" << std::endl;
}

void KitchenSubsystem::washDishes() {
    std::cout << "Washing the dishes" << std::endl;
}