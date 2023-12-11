#ifndef FACADE_ORDER_FACADE_HPP
#define FACADE_ORDER_FACADE_HPP

#include "WaiterSubsystem.hpp"
#include "KitchenSubsystem.hpp"

class OrderFacade {
public:
    void orderFood();

private:
    WaiterSubsystem waiter_;
    KitchenSubsystem kitchen_;
};

#endif // FACADE_ORDER_FACADE_HPP