#include "Item.hpp"
#include "Box.hpp"

#include <iostream>

int main() {
    Box* box = new Box();
    Box* innerBox = new Box();

    Item* item1 = new Item(100);
    Item* item2 = new Item(200);
    innerBox->addComponent(item1);
    innerBox->addComponent(item2);

    Item* item3 = new Item(300);
    box->addComponent(item3);
    box->addComponent(innerBox);

    std::cout << "Total price: " << box->getPrice() << std::endl;
}