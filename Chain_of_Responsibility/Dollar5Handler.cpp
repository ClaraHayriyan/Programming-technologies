#include "Dollar5Handler.hpp"

#include <iostream>

Dollar5Handler::Dollar5Handler(std::shared_ptr<ATMHandler> next)
: ATMHandler(next)
{
}

void Dollar5Handler::handleRequest(int amount) {
    int count = amount / 5;
    std::cout << "number of 5 dollars: " << count << std::endl;
    amount -= count * 5;
    if(amount)
        std::cout << "Request can't be completed. Please, enter a correct amount." << std::endl;
    else
        std::cout << "Request is completed." << std::endl;
}