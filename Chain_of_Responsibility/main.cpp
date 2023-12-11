#include "Dollar50Handler.hpp"
#include "Dollar20Handler.hpp"
#include "Dollar5Handler.hpp"

int main() {
    std::shared_ptr<ATMHandler> dollar50Handler = std::make_shared<Dollar50Handler>();
    std::shared_ptr<ATMHandler> dollar20Handler = std::make_shared<Dollar20Handler>();
    std::shared_ptr<ATMHandler> dollar5Handler = std::make_shared<Dollar5Handler>();

    dollar50Handler->setNext(dollar20Handler);
    dollar20Handler->setNext(dollar5Handler);

    dollar50Handler->handleRequest(341);
}