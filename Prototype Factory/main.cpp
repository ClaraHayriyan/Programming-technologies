#include "EmployeeFactory.hpp"

#include <iostream>

void print(const ContactPtr& contact) {
    std::cout << contact->name << " " << contact->address.street << " "
              << contact->address.city << " " << contact->address.suite << std::endl;
}

int main() {
    auto john = EmployeeFactory::NewMainOfficeEmployee("John Doe", 123);
    auto jane = EmployeeFactory::NewAuxOfficeEmployee("Jane Doe", 124);

    print(john);
    print(jane);
}