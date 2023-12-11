#ifndef CHAIN_OF_RESPONSIBILITY_DOLLAR_20_HANDLER_HPP
#define CHAIN_OF_RESPONSIBILITY_DOLLAR_20_HANDLER_HPP

#include "ATMHandler.hpp"

class Dollar20Handler : public ATMHandler {
public:
    Dollar20Handler(std::shared_ptr<ATMHandler> next = nullptr);

    virtual void handleRequest(int amount) override;
};

#endif // CHAIN_OF_RESPONSIBILITY_DOLLAR_20_HANDLER_HPP