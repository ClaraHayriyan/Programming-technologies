#include "PersonObserver.hpp"

#include <iostream>

void PersonObserver::fieldChanged(Person& person, const std::string& fieldName) {
    std::cout << "Persons " << fieldName << " has changed!" << std::endl;
}