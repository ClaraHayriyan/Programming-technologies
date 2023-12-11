#ifndef CHAIN_OF_RESPONSIBILITY_ATM_HANDLER_HPP
#define CHAIN_OF_RESPONSIBILITY_ATM_HANDLER_HPP

#include <memory>

class ATMHandler {
public:
    ATMHandler(std::shared_ptr<ATMHandler> next = nullptr);
    virtual ~ATMHandler() =default;
    void setNext(std::shared_ptr<ATMHandler> next);

    virtual void handleRequest(int amount);

private:
    std::shared_ptr<ATMHandler> next_;
};

#endif // CHAIN_OF_RESPONSIBILITY_ATM_HANDLER_HPP