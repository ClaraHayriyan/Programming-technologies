#ifndef PROTOTYPE_FACTORY_CONTACT_HPP
#define PROTOTYPE_FACTORY_CONTACT_HPP

#include <string>

struct Address {
    std::string street;
    std::string city;
    int suite;
};

struct Contact {
    std::string name;
    Address address;
};

#endif // PROTOTYPE_FACTORY_CONTACT_HPP