#include "OrderFacade.hpp"

void OrderFacade::orderFood() {
    waiter_.writeOrder();
    waiter_.sendToKitchen();
    kitchen_.cookFood();
    kitchen_.callWaiter();
    waiter_.serveCustomer();
    kitchen_.washDishes();
}