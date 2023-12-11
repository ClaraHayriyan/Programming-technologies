#include "ATMHandler.hpp"

ATMHandler::ATMHandler(std::shared_ptr<ATMHandler> next)
: next_(next)
{
}

void ATMHandler::setNext(std::shared_ptr<ATMHandler> next) {
    next_ = next;
}

void ATMHandler::handleRequest(int amount) {
    if(next_)
        next_->handleRequest(amount);
}