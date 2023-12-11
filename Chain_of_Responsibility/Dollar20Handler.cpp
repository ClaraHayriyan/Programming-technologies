#include "Dollar20Handler.hpp"

#include <iostream>

Dollar20Handler::Dollar20Handler(std::shared_ptr<ATMHandler> next)
: ATMHandler(next)
{
}

void Dollar20Handler::handleRequest(int amount) {
    int count = amount / 20;
    std::cout << "number of 20 dollars: " << count << std::endl;
    amount -= count * 20;
    if(amount)
        ATMHandler::handleRequest(amount);
    else
        std::cout << "Request is completed. No need to forward it." << std::endl;
}