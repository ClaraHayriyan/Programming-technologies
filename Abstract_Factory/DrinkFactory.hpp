#ifndef ABSTRACT_FACTORY_DRINK_FACTORY_HPP
#define ABSTRACT_FACTORY_DRINK_FACTORY_HPP

#include "AbstractDrinkFactory.hpp"

#include <string>
#include <unordered_map>

class DrinkFactory {
public:
    DrinkFactory();
    DrinkPtr makeHot(const std::string& drinkName);
    DrinkPtr makeCold(const std::string& drinkName);

private:
    using FactoryPtr = std::unique_ptr<AbstractDrinkFactory>;
    using DrinkMenu = std::unordered_map<std::string, FactoryPtr>;

private:
    DrinkMenu menu_; 
};

#endif // ABSTRACT_FACTORY_DRINK_FACTORY_HPP