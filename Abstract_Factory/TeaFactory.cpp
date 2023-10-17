#include "TeaFactory.hpp"
#include "Tea.hpp"

DrinkPtr TeaFactory::make() {
    return std::make_unique<Tea>();
}