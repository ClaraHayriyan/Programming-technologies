#ifndef CHAIN_OF_RESPONSIBILITY_DOLLAR_50_HANDLER_HPP
#define CHAIN_OF_RESPONSIBILITY_DOLLAR_50_HANDLER_HPP

#include "ATMHandler.hpp"

class Dollar50Handler : public ATMHandler {
public:
    Dollar50Handler(std::shared_ptr<ATMHandler> next = nullptr);

    virtual void handleRequest(int amount) override;
};

#endif // CHAIN_OF_RESPONSIBILITY_DOLLAR_50_HANDLER_HPP