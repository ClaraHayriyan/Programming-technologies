#ifndef FACTORY_LOGISTICS_HPP
#define FACTORY_LOGISTICS_HPP

#include "Transport.hpp"
#include <memory> // std::shared_ptr

using TransportPtr = std::shared_ptr<Transport>;

class Logistics {
public:
    virtual ~Logistics();
    virtual TransportPtr createTransport() =0;
    void planDeivery();
};

#endif // FACTORY_LOGISTICS_HPP