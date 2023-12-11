#include "Dollar50Handler.hpp"

#include <iostream>

Dollar50Handler::Dollar50Handler(std::shared_ptr<ATMHandler> next)
: ATMHandler(next)
{
}

void Dollar50Handler::handleRequest(int amount) {
    int count = amount / 50;
    std::cout << "number of 50 dollars: " << count << std::endl;
    amount -= count * 50;
    if(amount)
        ATMHandler::handleRequest(amount);
    else
        std::cout << "Request is completed. No need to forward it." << std::endl;
}