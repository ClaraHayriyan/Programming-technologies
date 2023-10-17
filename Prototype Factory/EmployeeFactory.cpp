#include "EmployeeFactory.hpp"

ContactPtr EmployeeFactory::NewMainOfficeEmployee(const std::string& name, int suite) {
    return NewEmployee(name, suite, main_);
}

ContactPtr EmployeeFactory::NewAuxOfficeEmployee(const std::string& name, int suite) {
    return NewEmployee(name, suite, aux_);
}

ContactPtr EmployeeFactory::NewEmployee(const std::string& name, int suite, const Contact& prototype) {
    ContactPtr contact = std::make_unique<Contact>(prototype);
    contact->name = name;
    contact->address.suite = suite;
    return contact;
}

Contact EmployeeFactory::main_{ "", { "123 East Dr", "London", 0 } };

Contact EmployeeFactory::aux_{ "", { "123B East Dr", "London", 0 } };