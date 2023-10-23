#include "Box.hpp"

void Box::addComponent(Component* component) {
    components_.push_back(component);
}

int Box::getPrice() {
    int price{0};
    for(const auto& component : components_) {
        price += component->getPrice();
    }
    return price;
}