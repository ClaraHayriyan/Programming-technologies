#include "DrinkFactory.hpp"

#include "TeaFactory.hpp"
#include "CoffeeFactory.hpp"

DrinkFactory::DrinkFactory() {
    menu_["tea"] = FactoryPtr(new TeaFactory);
    menu_["coffee"] = FactoryPtr(new CoffeeFactory);
}

DrinkPtr DrinkFactory::makeHot(const std::string& drinkName) {
    DrinkPtr drink = menu_[drinkName]->make();
    drink->prepareHot();
    return drink;
}

DrinkPtr DrinkFactory::makeCold(const std::string& drinkName) {
    DrinkPtr drink = menu_[drinkName]->make();
    drink->prepareCold();
    return drink;
}