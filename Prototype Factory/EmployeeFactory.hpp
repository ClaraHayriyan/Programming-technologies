#ifndef PROTOTYPE_FACTORY_EMPLOYEE_FACTORY_HPP
#define PROTOTYPE_FACTORY_EMPLOYEE_FACTORY_HPP

#include "Contact.hpp"

#include <memory> // std::unique_ptr

using ContactPtr = std::unique_ptr<Contact>;

class EmployeeFactory {
public:
    static ContactPtr NewMainOfficeEmployee(const std::string& name, int suite);
    static ContactPtr NewAuxOfficeEmployee(const std::string& name, int suite);

private:
    static ContactPtr NewEmployee(const std::string& name, int suite, const Contact& prototype);

private:
    static Contact main_;
    static Contact aux_;
};

#endif // PROTOTYPE_FACTORY_EMPLOYEE_FACTORY_HPP